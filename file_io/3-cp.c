#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int from, to, r;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	write(to, buffer, r);

	free(buffer);
	close(from);
	close(to);

	return (0);
}
