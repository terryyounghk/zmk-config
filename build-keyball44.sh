#!/bin/sh

. "./build-zmk-firmware.sh"

ZMK_DIR="${1}"

KEYBOARD="keyball44"

BUILD_TIME="$(date +%Y%m%d%H%M%S)"
CURRENT_DIR="$(pwd)"
DZMK_CONFIG="${CURRENT_DIR}/config"
ZMK_APP_DIR="${ZMK_DIR}/app"


build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
  "nice_nano_v2" \
  "-DSHIELD=keyball44_left nice_view_adapter nice_view" \
  "-DZMK_EXTRA_MODULES=${CURRENT_DIR}/drivers/zmk-pmw3610-driver" \
  "left"

build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
  "nice_nano_v2" \
  "-DSHIELD=keyball44_right nice_view_adapter nice_view" \
  "-DZMK_EXTRA_MODULES=${CURRENT_DIR}/drivers/zmk-pmw3610-driver" \
  "right"
