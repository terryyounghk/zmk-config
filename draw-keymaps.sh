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
    "numbers individual 1"
    "numpad individual 2"
    "symbols individual 3"
    "coding individual 4"
    "nav individual 5"
    "controls individual 6"
    "switch individual 7"
    "mouse individual 8"
    "afk individual 9"
    "combo-adjacent individual 10"
    "combo-layers individual 11"
    "combo-mods individual 12"
    "combo-symmetric individual 13"
    "combo-panic individual 14"
    "combo-system individual 15"
    "combo-keyboard individual 16"
    "combo-tmux individual 17"
    "combo-neovim individual 18"
    "combo-apps individual 19"
    "combo-capturing individual 20"
    "combo-browser individual 21"
    "combo-vscode individual 22"
    "combo-vscode-movement individual 23"
    # "layers individual 0 1 2 3 4 5 6 7 8 9"
    # "combos individual 10 11 12 13 14 15 16 17 18 19 20 21 22 23"
)

prepare_config() {
  local style="$1"

  rm "${temp_file}" 2>/dev/null
  touch "${temp_file}"

  yq eval '.draw_config.footer_text = "Created with keymap-drawer"' \
      "$config_file" -i

  yq eval ".draw_config.n_columns = 4" \
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
