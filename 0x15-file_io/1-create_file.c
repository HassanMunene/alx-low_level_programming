#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - append to a file
 * @filename: path to the file
 * @text_content: what to append
 * Return: chars read
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w;
	int size;
	char *mem;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(fd);
		return (-1);
	}
	w = write(fd, text_content, size);
	if (w == -1)
	{
		close(fd);
		free(mem);
		return (-1);
	}
	close(fd);
	free(mem);
	return (1);
}
