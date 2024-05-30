#!/bin/zsh

# Display the last 20 lines of all .log files in the directory
for file in *.log; do
    if [[ -f "$file" ]]; then
        echo "Last 20 lines of $file:"
        tail -n 20 "$file"
        echo "------------------------"
    fi
done

