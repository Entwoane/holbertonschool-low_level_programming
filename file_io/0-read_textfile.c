#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX stdout
 * @filename: name of the file to print
 * @letters: letters to count
 *
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t letters_count;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letters_count = read(fd, buffer, letters);
	if (letters_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write(STDOUT_FILENO, buffer, letters_count);

	free(buffer);
	close(fd);
	return (letters_count);
}
