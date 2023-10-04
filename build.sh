#!/bin/sh

# Usage:
#   ./build.sh /path/to/zmk/app /path/to/your/zmk-config/config
#
# Installation and Setup:
#   https://zmk.dev/docs/user-setup
#   https://zmk.dev/docs/development/setup
#
# Building:
#   https://zmk.dev/docs/customization#building-from-a-local-zmk-fork-using-zmk-config
#   https://zmk.dev/docs/development/build-flash

ZMK_APP_DIRECTORY=$1
DZMK_CONFIG_PATH=$2
BOARD="nice_nano_v2"

CURRENT_DIR=$(pwd)
cd $ZMK_APP_DIRECTORY && \
west build -p -b "$BOARD" -d build/left  -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" -DSHIELD="corne_left   nice_view_adapter nice_view" && \
west build -p -b "$BOARD" -d build/right -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" -DSHIELD="corne_right  nice_view_adapter nice_view" && \
BUILD_DATE=$(date +%Y%m%d%H%M%S) && \
\cp build/left/zephyr/zmk.uf2 "$CURRENT_DIR/firmware/build.${BUILD_DATE}.corne_left-nice_view_adapter-nice_view-${BOARD}.uf2" && \
\cp build/right/zephyr/zmk.uf2 "$CURRENT_DIR/firmware/build.${BUILD_DATE}.corne_right-nice_view_adapter-nice_view-${BOARD}.uf2"

cd $CURRENT_DIR
