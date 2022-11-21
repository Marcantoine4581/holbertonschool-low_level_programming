#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: A pointer to the name of the file.
 * @letters:  is the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 * if the file can not be opened or read, return 0.
 * if filename is NULL return 0.
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char buffer;

	buffer = malloc(sizeof(letters));

	fd = open(filename, O_RDONLY);
	r = read(fd, buffer, letters)
	w = write(STDOUT_FILENO, buffer, r);

	close(fd);

	return (w);
}