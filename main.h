#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <math.h>

#define ERROR -1

/* PRINTF FLAGS */
#define MINUS 1
#define PLUS 2
#define ZERO 4
#define HASH 8
#define SPACE 16

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
int print_nmb(va_list args);
int print_bin(va_list args);
int print_unsigned_int(va_list args);
int print_octa(va_list args);
int print_hex_low(va_list args);
int print_HEX_upp(va_list args);
int S_conversion(va_list args);
int print_address(va_list args);
int print_str_reverso(va_list args);
int print_rot13(va_list args);
int print_hex_long(unsigned long int n);
int get_flags(const char *format, int *i);
int _puts(char *str);
int _strlenc(const char *s);
void _itoa(long n, char s[]);
int to_base_num(unsigned long num, int base, char buffer[]);
void reverse_str(char s[]);
#endif
