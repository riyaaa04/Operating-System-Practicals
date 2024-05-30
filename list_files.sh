#!/bin/zsh

# List all files in the current directory with their sizes
for file in *; do
    # Check if the item is a file
    if [[ -f "$file" ]]; then
        # Get the size of the file
        size=$(du -sh "$file" | cut -f1)
        echo "$file: $size"
    fi
done

