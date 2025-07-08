#!/bin/sh

# Display disclaimer
cat << "EOF"
You are about to build the firmware for a forked custom Corneish-Zen.
This is NOT intended for, nor tested to be compatible with, the Corneish-Zen by lowprokb.ca.

If you build this particular firmware, you must:
1. Understand the implications of flashing this firmware to your board.
2. Have appropriate backups
3. Accept all responsibility for potential risks

Are you sure?
EOF

# Prompt with default decline
printf "Continue? [y/N] "
read -r answer

# Process response
case "$(echo "$answer" | tr '[:upper:]' '[:lower:]')" in
    y|yes)
        echo "Confirmation accepted. Continuing..."
        ;;
    *)
        echo "Operation canceled."
        # Exit with failure status (non-zero)
        exit 1
        ;;
esac

. "./build-zmk-firmware.sh"

ZMK_DIR="${1}"
SIDE="${2}"

KEYBOARD="corneish-zen"

build() {
    local side="$1"
    BUILD_TIME="$(date +%Y%m%d%H%M%S)"
    CURRENT_DIR="$(pwd)"
    DZMK_CONFIG="${CURRENT_DIR}/config"
    ZMK_APP_DIR="${ZMK_DIR}/app"
    
    build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
      "corneish_zen_v2_${side}" \
      "" \
      "" \
      "${side}"
}

# Build only specified side if provided
if [ -n "${SIDE}" ]; then
    build "${SIDE}"
else
    build "left"
    build "right"
fi
