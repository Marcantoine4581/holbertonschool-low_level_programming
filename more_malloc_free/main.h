#ifndef main_h
#define main_h

/**
 * File: main.h
 * Author: Marc-Antoine VANNIER
 * Description: Header file containing prototypes for all functions
 * used for more_malloc_free directory.
 */

int _putchar(char);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
