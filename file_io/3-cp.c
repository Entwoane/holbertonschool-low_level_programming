#include "main.h"
#include <stdio.h>
/**
 * error_exit - function that exit the program
 * @code: error code do print
 * @msg: message to print
 * @file: file
 * @fd: file descriptor
 */
void error_exit(int code, const char *msg, const char *file, int fd)
{
	dprintf(STDERR_FILENO, msg, file);
	if (fd != -1)
	{
		close(fd);
	}
	exit(code);
}
/**
 * close_file - function that closes the file
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd);
	}
}
/**
 * copy_file - function that copy files
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @file_to: destination of the copy
 */
void copy_file(int fd_from, int fd_to, const char *file_to)
{
	int rd, wr;
	char buffer[BUFFER_SIZE];

	while ((rd = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		wr = write(fd_to, buffer, rd);
		if (wr != rd)
		{
			error_exit(99, "Error: Can't write to %s\n", file_to, fd_to);
		}
	}
	if (rd == -1)
	{
		exit(98);
	}
}
/**
 * main - entry point of the function
 * @argc: argument count
 * @argv: array containig values
 *
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", NULL, -1);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2], -1);
	}

	copy_file(fd_from, fd_to, argv[2]);
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
