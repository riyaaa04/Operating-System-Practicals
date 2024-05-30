#include <stdio.h>
#include <stdlib.h>

void open_file_in_mode(const char *filename, const char *mode) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("fopen");
        return;
    }
    printf("File '%s' opened successfully in mode '%s'\n", filename, mode);
    fclose(file);
}

int main() {
    const char *filename = "fhexample4.txt";

    // Create a file with initial content for demonstration
    FILE *init_file = fopen(filename, "w");
    if (init_file == NULL) {
        perror("fopen");
        return EXIT_FAILURE;
    }
    fprintf(init_file, "Initial content.\n");
    fclose(init_file);

    // Demonstrate opening the file in different modes
    open_file_in_mode(filename, "r");   // Open for reading
    open_file_in_mode(filename, "w");   // Open for writing (truncates file)
    open_file_in_mode(filename, "a");   // Open for appending
    open_file_in_mode(filename, "r+");  // Open for reading and writing
    open_file_in_mode(filename, "w+");  // Open for reading and writing (truncates file)

    return EXIT_SUCCESS;
}

