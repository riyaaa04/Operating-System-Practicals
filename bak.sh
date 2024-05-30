#!/bin/zsh

# Rename all .txt files to .bak
for file in *.txt; do
    if [[ -f "$file" ]]; then
        new_name="${file%.txt}.bak"
        mv "$file" "$new_name"
        echo "Renamed $file to $new_name"
    fi
done

