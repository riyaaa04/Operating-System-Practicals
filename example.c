#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd, new_fd;
    char buffer[1024];
    ssize_t num_bytes;

    // Open a file
    fd = open("example.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Duplicate the file descriptor
    new_fd = dup(fd);
    if (new_fd == -1) {
        perror("dup");
        close(fd);
        exit(EXIT_FAILURE);
    }

    // Write to the original file descriptor
    num_bytes = write(fd, "Original file descriptor\n", 25);
    if (num_bytes == -1) {
        perror("write");
        close(fd);
        close(new_fd);
        exit(EXIT_FAILURE);
    }

    // Write to the duplicated file descriptor
    num_bytes = write(new_fd, "Duplicated file descriptor\n", 27);
    if (num_bytes == -1) {
        perror("write");
        close(fd);
        close(new_fd);
        exit(EXIT_FAILURE);
    }

    printf("Data written to both file descriptors successfully.\n");

    // Close the file descriptors
    close(fd);
    close(new_fd);

    return 0;
}

