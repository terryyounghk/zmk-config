#!/bin/sh

ZMK_DIR="${1}"

./build-corne36.sh "${ZMK_DIR}" && \
./build-corneish-zen.sh "${ZMK_DIR}" && \
./build-corne42-custom.sh "${ZMK_DIR}" && \
./build-eyelash-corne.sh "${ZMK_DIR}"
./build-keyball44.sh "${ZMK_DIR}"
