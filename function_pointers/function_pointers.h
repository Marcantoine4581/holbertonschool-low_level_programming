#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>
/**
 * putchar - writes the character c to stdout.
 * @char: string argument.
 * Return: On success 1.
 */
int _putchar(char);

/**
 * print_name - Print a name from a function pointer.
 * @name: The name to be printed.
 * @f: function pointer that takes a string argument.
 */
void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
