#include "main.h"

/**
 * print_str_reverso - Prints a string in reverse.
 *
 * @args: A va_list containing the arguments.
 *
 *
 * Return: The number of characters in the original string.
 */

int print_str_reverso(va_list args)
{
	int l = 0, i;
	char *arg;

	arg = va_arg(args, char *);

	if (arg == NULL)
		arg = "(null)";

	while (arg[l] != '\0')
		l++;

	for (i = l - 1; i >= 0; i--)
		_putchar(arg[i]);

	return (l);
}
