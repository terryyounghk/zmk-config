#!/bin/sh

# TODO:Handle optional DSHIELD better

# This function builds ZMK firmware and copies the zmk.uf2 to
# the zmk-config/firmware/{KEYBOARD} directory and renames it for better context.
# For split keyboards, call this separately for left and right.

# Installation and Setup:
#   https://zmk.dev/docs/user-setup
#   https://zmk.dev/docs/development/setup
#
# Building:
#   https://zmk.dev/docs/customization#building-from-a-local-zmk-fork-using-zmk-config
#   https://zmk.dev/docs/development/build-flash

build_zmk_firmware () {
  set -x
  BUILD_TIME="${1}"
  CURRENT_DIR="${2}"
  DZMK_CONFIG="${3}"
  ZMK_APP_DIR="${4}"
  KEYBOARD="${5}"
  BOARD="${6}"
  DSHIELD="${7}"
  DEXTRA_MODULES="${8}"
  BUILD_SIDE="${9}"

  TARGET_DIR="${CURRENT_DIR}/firmware/${KEYBOARD}"

  mkdir -p "${TARGET_DIR}"

  cd "${ZMK_APP_DIR}" || exit 1

  west build -p -b "${BOARD}" -d "build/${BUILD_SIDE}" -- "-DZMK_CONFIG=${DZMK_CONFIG}" "${DSHIELD}" "${DEXTRA_MODULES}" && \
    \cp "build/${BUILD_SIDE}/zephyr/zmk.uf2" "${TARGET_DIR}/${KEYBOARD}_${BUILD_SIDE}.${BUILD_TIME}.uf2"

  cd "${CURRENT_DIR}" || exit 2
  set +x
}
