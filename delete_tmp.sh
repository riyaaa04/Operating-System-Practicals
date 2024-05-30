#!/bin/zsh

# Find and delete all files with .tmp extension
for file in *.tmp; do
    if [[ -f "$file" ]]; then
        rm "$file"
        echo "Deleted $file"
    fi
done

