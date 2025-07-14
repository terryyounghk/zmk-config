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
    "qwerty individual 0"
    "harmony individual 1"
    "colemak-dh individual 2"
    "numbers individual 3"
    "numpad individual 4"
    "symbols individual 5"
    "coding individual 6"
    "nav individual 7"
    "controls individual 8"
    "switch individual 9"
    "mouse individual 10"
    "afk individual 11"
    "combo-adjacent individual 12"
    "combo-layers individual 13"
    "combo-mods individual 14"
    "combo-symmetric individual 15"
    "combo-panic individual 16"
    "combo-system individual 17"
    "combo-keyboard individual 18"
    "combo-tmux individual 19"
    "combo-neovim individual 20"
    "combo-apps individual 21"
    "combo-capturing individual 22"
    "combo-browser individual 23"
    "combo-vscode individual 24"
    "combo-vscode-movement individual 25"
    # "layers individual 1 2 3 4 5 6 7 8 9 10 11"
    # "combos individual 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25"
)

prepare_config() {
  local style="$1"

  rm "${temp_file}" 2>/dev/null
  touch "${temp_file}"

  yq eval '.draw_config.footer_text = "Created with keymap-drawer"' \
      "$config_file" -i

  yq eval ".draw_config.n_columns = 2" \
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

echo "[DONE] Script completed"
