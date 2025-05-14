#!/bin/sh

. "./build-zmk-firmware.sh"

ZMK_DIR="${1}"

KEYBOARD="eyelash_corne"

BUILD_TIME="$(date +%Y%m%d%H%M%S)"
CURRENT_DIR="$(pwd)"
DZMK_CONFIG="${CURRENT_DIR}/config"
ZMK_APP_DIR="${ZMK_DIR}/app"


build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
  "eyelash_corne_left" \
  "-DSHIELD=nice_view_adapter nice_view" \
  "left"

build_zmk_firmware "${BUILD_TIME}" "${CURRENT_DIR}" "${DZMK_CONFIG}" "${ZMK_APP_DIR}" "${KEYBOARD}" \
  "eyelash_corne_right" \
  "-DSHIELD=nice_view_adapter nice_view" \
  "right"
