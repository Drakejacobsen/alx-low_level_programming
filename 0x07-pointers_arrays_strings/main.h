#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * Auth: sam tech (samuel birhanu)
 * description:Headder file containing prototypes for all functions
 * used in the 0x06-pointers _arrays_strings directory.
 */
#include <stddef.h>

int_putchar(char c);
void *_memset(void *s, int c, size_t n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
