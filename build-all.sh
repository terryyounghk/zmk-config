#!/bin/sh

ZMK_DIR="${1}"
MAIN_ONLY=false

# Parse options
while [ $# -gt 0 ]; do
    case "$1" in
        -m|--main-only)
            MAIN_ONLY=true
            ;;
        *)
            ;;
    esac
    shift
done

# Define sub-scripts with main side specification
SUB_SCRIPTS="
build-corneish-zen-forked.sh left
build-corne36.sh left
build-corne42-custom.sh left
build-eyelash-corne.sh left
build-keyball44.sh right
"

echo "Main script starting"

# Save current IFS and set to newline only
OLD_IFS="$IFS"
IFS='
'  # Newline character

# Iterate through each line of SUB_SCRIPTS
for line in $SUB_SCRIPTS; do
    # Skip empty lines
    [ -z "$line" ] && continue

    # Split line into script and main_side
    script="${line%% *}"
    main_side="${line#* }"

    echo "Executing $script..."

    # Execute with side parameter if --main-only specified
    if [ "$MAIN_ONLY" = true ]; then
        ./"$script" "${ZMK_DIR}" "${main_side}"
    else
        ./"$script" "${ZMK_DIR}"
    fi
    exit_status=$?

    # Check exit status
    if [ $exit_status -eq 9 ]; then
        echo "$script: Disclaimer declined. Skipping this build." >&2
    elif [ $exit_status -ne 0 ]; then
        echo "$script did not complete successfully. Exiting main." >&2
        IFS="$OLD_IFS"  # Restore IFS before exit
        exit $exit_status
    else
        echo "$script completed successfully"
    fi
done

# Restore original IFS
IFS="$OLD_IFS"

echo "All builds completed"
