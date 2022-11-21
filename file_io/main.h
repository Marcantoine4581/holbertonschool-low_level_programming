#ifndef MAIN_H
#define MAIN_H

/**
 * putchar - writes the character c to stdout.
 * @char: string argument.
 * Return: On success 1.
 */
int _putchar(char);

/** Librairies for open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/** Librairy for read & write */
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
