#!/bin/sh

read -r -d '' DISCLAIMER <<- EOM
DISCLAIMER:
You are using/installing any software/firmware found in this repository at your own risk.
I shall not be held responsible for anything that can happen to any of your devices
nor any void of warranties as a result of you doing these modifications to it.

WARNING:
This script is intended for flashing nice!nano firmware only.
Press ESC now if you are not fully sure how this script works.
EOM

flash_nicenano() {
  BOLDRED='\033[1;31m'
  NC='\033[0m' # No Color


  uf2_dir="${1:?Please provide a directory}"
  if [ ! -d "${uf2_dir}" ]; then
      echo "Error: '${uf2_dir}' is not a valid directory."
      return 1
  fi

  # TODO: --time-style=FORMAT with relative not supported yet: https://github.com/orgs/eza-community/discussions/758
  # EZA_TIME_FORMAT="+%F %R<newline><RELATIVE> %R"

  EZA_TIME_FORMAT="+%F %R"
  EZA_OPTS="-lhr --time-style=\"${EZA_TIME_FORMAT}\" --color=always"
  BAT_OPTS="--color=always --style=plain"

  fzf_preview="echo \"${BOLDRED}${DISCLAIMER}${NC}\" && echo && eza ${EZA_OPTS} {} && echo && file {} | sed 's/^.*: //' | bat ${BAT_OPTS}"
  uf2_file=$(find "${uf2_dir}" -name "*.uf2" -exec ls -1t "{}" + | fzf --preview "${fzf_preview}" --preview-window=up:15)

  if [ -n "${uf2_file}" ]; then
      echo "Selected: ${uf2_file}"
      read -p "Flash this firmware? (y/n) " confirm
      if [[ ${confirm} == [yY] || ${confirm} == [yY][eE][sS] ]]; then
          if [ -d "/Volumes/NICENANO" ]; then
              cp "${uf2_file}" /Volumes/NICENANO && echo "Firmware flashed successfully!"
          else
              echo "Error: nice!nano volume not found. Is it in bootloader mode?"
              return 1
          fi
      else
          echo "Flashing cancelled."
      fi
  else
      echo "No file selected."
  fi
}

flash_nicenano firmware
