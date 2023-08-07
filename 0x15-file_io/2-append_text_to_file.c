#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - Prints an error message and exits with the specified code.
 * @msg: The error message to print.
 * @exit_code: The exit code to use.
 */
void error_exit(const char *msg, int exit_code)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
    exit(exit_code);
}

/**
 * main - Copies the content of one file to another.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
    int fd_from, fd_to, read_count, write_count;
    char buffer[1024];

    if (argc != 3)
        error_exit("Usage: cp file_from file_to", 97);

    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
        error_exit("Error: Can't read from file", 98);

    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
        error_exit("Error: Can't write to file", 99);

    while ((read_count = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        write_count = write(fd_to, buffer, read_count);
        if (write_count == -1)
            error_exit("Error: Can't write to file", 99);
    }

    if (read_count == -1)
        error_exit("Error: Can't read from file", 98);

    if (close(fd_from) == -1)
        error_exit("Error: Can't close fd", 100);
    
    if (close(fd_to) == -1)
        error_exit("Error: Can't close fd", 100);

    return (0);
}
