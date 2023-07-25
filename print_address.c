#include "main.h"

/**
 * print_address - Print the memory address of a pointer.
 * @args: The va_list that contains the pointer to be printed.
 *
 * Return: The number of characters printed.
 */

int print_address(va_list args)
{
	void *arg;
	char *s = "(nil)";
	long int x;
	int y;
	int i;

	arg = va_arg(args, void *);
	if (arg == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	x = (unsigned long int)arg;
	_putchar('0');
	_putchar('x');
	y = print_hex_long(x);
	return (y + 2);
}
