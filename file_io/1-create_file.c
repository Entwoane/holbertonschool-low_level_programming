#include "main.h"
#include <string.h>
/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on success
 * Return -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;
	size_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | O_EXCL, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);
		written = write(fd, text_content, len);
			if (written == -1 || (size_t)written != len)
			{
				close(fd);
				return (-1);
			}
	}
		close(fd);
		return (1);
}
