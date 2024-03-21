#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: path to file
 * @text_content: the content to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int size;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	size = strlen(text_content);
	w = write(fd, text_content, size);

	if (w == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
