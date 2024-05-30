#!/bin/zsh

# Check if the correct number of arguments are provided
if [ $# -ne 2 ]; then
    echo "Usage: $0 <source_directory> <backup_directory>"
    exit 1
fi

# Source directory
source_dir="$1"

# Backup directory
backup_dir="$2"

# Check if source directory exists
if [ ! -d "$source_dir" ]; then
    echo "Source directory does not exist."
    exit 1
fi

# Check if backup directory exists, if not create it
if [ ! -d "$backup_dir" ]; then
    mkdir -p "$backup_dir"
fi

# Create a timestamp for the backup
timestamp=$(date +%Y%m%d_%H%M%S)

# Create a tar archive of the source directory
tar -czf "${backup_dir}/${source_dir##*/}_${timestamp}.tar.gz" "$source_dir"

# Check if backup was successful
if [ $? -eq 0 ]; then
    echo "Backup of $source_dir created successfully in $backup_dir."
else
    echo "Backup creation failed."
fi

