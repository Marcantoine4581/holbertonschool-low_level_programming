#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to a string to write to the file.
 * Return: 1 on success, -1 on failure.
 * if filename is NULL return -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
