#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

/**
 * struct format - struct for storing conversion specifiers and functions
 * @f: pointer to corresponding conversion function
 * @op: Format specifier string, e.g., "%d", "%s", etc.
 * Custom printf function implementation.
 * Custom putchar function.
 * Function declarations for handling various format specifiers.
 *
 */

typedef struct format
{
	char *op;
	int (*f)();
} match_specifier;

int _printf(const char *format, ...);
int _putchar(char c);
int print_str(va_list args);
int _strlen(char *s);
int print_char(va_list args);
int print_percent_37(void);
#endif
