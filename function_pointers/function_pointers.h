#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

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

#endif
