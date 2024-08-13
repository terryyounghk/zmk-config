#!/bin/sh

# Build script for ZMK
#
# Usage:
#   ./build.sh /path/to/zmk/app /path/to/your/zmk-config/config split|standard board [shield]
#
#   If you specify a split build,
#       For board-only builds, the "board" param will be used to append _left and _right.
#       For board+shield builds, the FIRST word "shield" param will be used to append _left and _right
#
# Examples:
#   ./build.sh /zmk/zmk-urob/app /zmk/zmk-config/config split nice_nano_v2 "corne nice_view_adapter nice_view"
#   ./build.sh /zmk/zmk-urob/app /zmk/zmk-config/config split corneish_zen_v2
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
TYPE=$3
BOARD=$4
SHIELD=$5

CURRENT_DIR=$(pwd)
BUILD_TIME=$(date +%Y%m%d%H%M%S)

cd $ZMK_APP_DIRECTORY

if [ "$TYPE" = "split" ]; then
  if [ ! -z "$SHIELD" ]; then
    KEEB=$(echo $SHIELD | tr ' ' '\n' | head -1 | xargs -n1)
    TARGET_DIR="$CURRENT_DIR/firmware/$KEEB"
    SHIELD_OTHERS=$(echo $SHIELD | cut -d' ' -f2-)
    SHIELD_LEFT="${KEEB}_left ${SHIELD_OTHERS}"
    SHIELD_RIGHT="${KEEB}_right ${SHIELD_OTHERS}"

    echo Building split board+shield: $KEEB
    echo Target dir: $TARGET_DIR
    echo Board: $BOARD
    echo Shield left: $SHIELD_LEFT
    echo Shield right: $SHIELD_RIGHT

    mkdir -p $TARGET_DIR
    set -x
    west build -p -b "$BOARD" -d build/left  -- -DZMK_CONFIG="${DZMK_CONFIG_PATH}" -DSHIELD="${SHIELD_LEFT}" && \
    west build -p -b "$BOARD" -d build/right -- -DZMK_CONFIG="${DZMK_CONFIG_PATH}" -DSHIELD="${SHIELD_RIGHT}" && \
    \cp build/left/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}_left.${BUILD_TIME}.uf2" && \
    \cp build/right/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}_right.${BUILD_TIME}.uf2"
  else
    KEEB=$(echo $BOARD | tr ' ' '\n' | tail -1 | xargs -n1)
    TARGET_DIR="$CURRENT_DIR/firmware/$KEEB"

    echo Building split board: $KEEB
    echo Target dir: $TARGET_DIR
    echo Board left: ${BOARD}_left
    echo Board right: ${BOARD}_right

    mkdir -p $TARGET_DIR
    set -x
    west build -p -b "${BOARD}_left" -d build/left  -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" && \
    west build -p -b "${BOARD}_right" -d build/right -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" && \
    \cp build/left/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}_left.${BUILD_TIME}.uf2" && \
    \cp build/right/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}_right.${BUILD_TIME}.uf2"
  fi
elif [ "$TYPE" = "standard" ]; then
  if [ ! -z "$SHIELD" ]; then
    KEEB=$SHIELD
    TARGET_DIR="$CURRENT_DIR/firmware/$KEEB"

    echo Building standard board+shield: $KEEB
    echo Target dir: $TARGET_DIR
    echo Board: $BOARD
    echo Shield: $SHIELD

    mkdir -p $TARGET_DIR
    set -x
    west build -p -b "$BOARD" -d build/standard -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" -DSHIELD="${SHIELD}" && \
    \cp build/standard/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}.${BUILD_TIME}.uf2"
  else
    KEEB=$BOARD
    TARGET_DIR="$CURRENT_DIR/firmware/$KEEB"

    echo Building standard board: $KEEB
    echo Target dir: $TARGET_DIR
    echo Board: $BOARD

    mkdir -p $TARGET_DIR
    set -x
    west build -p -b "$BOARD" -d build/standard -- -DZMK_CONFIG="$DZMK_CONFIG_PATH" && \
    \cp build/standard/zephyr/zmk.uf2 "$TARGET_DIR/${KEEB}.${BUILD_TIME}.uf2"
  fi
fi

cd $CURRENT_DIR
