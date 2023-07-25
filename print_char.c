#include "main.h"

/**
 * print_char - Print a single character.
 *
 * @args: A va_list pointing to the argument containing the character to print.
 *
 * Return: The number of characters printed (always 1).
 */

int print_char(va_list args)
{
	char x;

	x = va_arg(args, int);
	_putchar(x);
	return (1);
}
