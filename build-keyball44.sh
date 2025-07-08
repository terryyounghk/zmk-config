#!/bin/sh

. "./build-zmk-firmware.sh"

ZMK_DIR="${1}"
SIDE="${2}"

KEYBOARD="keyball44"

build() {
    local side="$1"
    BUILD_TIME="$(date +%Y%m%d%H%M%S)"
    CURRENT_DIR="$(pwd)"
    DZMK_CONFIG="${CURRENT_DIR}/config"
    ZMK_APP_DIR="${ZMK_DIR}/app"
    
    build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
      "nice_nano_v2" \
      "-DSHIELD=keyball44_${side} nice_view_adapter nice_view" \
      "-DZMK_EXTRA_MODULES=${CURRENT_DIR}/drivers/zmk-pmw3610-driver" \
      "${side}"
}

# Build only specified side if provided
if [ -n "${SIDE}" ]; then
    build "${SIDE}"
else
    build "left"
    build "right"
fi
