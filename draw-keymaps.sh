#!/bin/bash

# --------------------------------------------------------------

# Base directory for files
input_dir="./docs/keymap-drawer"
output_dir="./images"
base_filename="keymap-drawer"
input_yaml="${input_dir}/${base_filename}-keymap.yaml"
notation_yaml="${input_dir}/${base_filename}-notation.yaml"
config_file="${input_dir}/${base_filename}.config.yaml"
base_css="${input_dir}/${base_filename}-base.css"
added_css="${input_dir}/${base_filename}-added.css"
temp_file="${input_dir}/${base_filename}-temp.css"


# Extract layer names from YAML file using yq
layer_names=()
while IFS= read -r line; do
    layer_names+=("$line")
done < <(yq eval '.layers | keys | .[]' "$input_yaml")

# Check if layer names were extracted successfully
if [ ${#layer_names[@]} -eq 0 ]; then
    echo "Error: No layers found in YAML file"
    exit 1
fi

# Specifications: <suffix> <style> [layer_index...]
specs=(
    "complete overview"
    "layer-qwerty individual 0"
    "layer-harmony individual 1"
    "layer-colemak-dh individual 2"
    "layer-macros individual 3"
    "layer-numbers individual 4"
    "layer-numpad individual 5"
    "layer-symbols individual 6"
    "layer-coding individual 7"
    "layer-nav individual 8"
    "layer-controls individual 9"
    "layer-switch individual 10"
    "layer-pico-8 individual 11"
    "layer-retro individual 12"
    "layer-mouse individual 13"
    "layer-afk individual 14"
    "combo-adjacent individual 15"
    "combo-layers individual 16"
    "combo-mods individual 17"
    "combo-symmetric individual 18"
    "combo-panic individual 19"
    "combo-system individual 20"
    "combo-keyboard individual 21"
    "combo-tmux individual 22"
    "combo-neovim individual 23"
    "combo-apps individual 24"
    "combo-capturing individual 25"
    "combo-browser individual 26"
    "combo-gaming individual 27"
    "combo-vscode individual 28"
    "combo-vscode-movement individual 29"
    # "layers individual 1 2 3 4 5 6 7 8 9 10 11 12 13 14"
    # "combos individual 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29"
)

prepare_config() {
  local style="$1"

  rm "${temp_file}" 2>/dev/null
  touch "${temp_file}"

  yq eval '.draw_config.footer_text = "Created with keymap-drawer"' \
      "$config_file" -i

  yq eval ".draw_config.n_columns = 3" \
    "$config_file" -i

  \cat "$base_css" >> "$temp_file"
  if [[ "$style" == "individual" ]]; then
    \cat "$added_css" >> "$temp_file"
    yq eval '.draw_config.footer_text = ""' \
        "$config_file" -i
    yq eval ".draw_config.n_columns = 1" \
      "$config_file" -i
  fi

  yq eval ".draw_config.svg_extra_style = load_str(\"$temp_file\")" \
      "$config_file" -i
}

reset_config() {
  yq eval ".draw_config.svg_extra_style = []" \
      "$config_file" -i
}

# --------------------------------------------------------------

echo "Generating Notation SVG file..."

prepare_config "individual"

output_svg="${output_dir}/${base_filename}-notation.svg"
keymap -c "$config_file" draw -- "$notation_yaml" >| "$output_svg"
echo "[DONE] $output_svg"

# --------------------------------------------------------------

# Loop through each specification
echo "Generating ${#specs[@]} SVG files..."

for spec in "${specs[@]}"; do
    # Split specification into parts
    read -ra parts <<< "$spec"
    suffix="${parts[0]}"
    style="${parts[1]}"
    indices=("${parts[@]:2}")

    # Build the output file path
    output_svg="${output_dir}/${base_filename}-${suffix}.svg"

    # Collect selected layer names based on indices
    selected_layers=()
    for idx in "${indices[@]}"; do
        # Validate the index is a number
        if [[ ! "$idx" =~ ^[0-9]+$ ]]; then
            echo "Error: Invalid index '$idx' in spec '$spec'"
            exit 1
        fi
        # Validate index is within range
        if [ "$idx" -ge "${#layer_names[@]}" ]; then
            echo "Error: Index $idx out of bounds in spec '$spec'"
            exit 1
        fi
        selected_layers+=("${layer_names[$idx]}")
    done


    prepare_config "$style"

    # Print current operation details
    echo "Generating: $output_svg"
    echo "Style: $style"
    if [ ${#selected_layers[@]} -gt 0 ]; then
        echo "Layers:"
        printf '  %s\n' "${selected_layers[@]}"
        cmd=(keymap -c "$config_file" draw -s "${selected_layers[@]}" -- "$input_yaml")
    else
        echo "Layers: all"
        cmd=(keymap -c "$config_file" draw -- "$input_yaml")
    fi

    "${cmd[@]}" >| "$output_svg"
    echo "[DONE] $output_svg"
done

rm "${temp_file}" 2>/dev/null

reset_config

echo "[DONE] Script completed"
