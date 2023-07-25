#include "main.h"

/**
 * print_octa - Print the octal representation of an unsigned integer.
 * @args: The va_list that contains the unsigned integer to be printed.
 *
 * Return: The number of octal digits printed.
 */

int print_octa(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int count = 0;
	int n = 0;
	int m = 0;
	int octa[64];
	char a;

	if (arg == 0)
	{
		a = arg + '0';
		_putchar(a);
		return (1);
	}
	else
	{
		while (arg > 0)
		{
			octa[n] = arg % 8;
			arg = arg / 8;
			count++;
			n++;
		}
		for (m = n - 1; m >= 0; m--)
		{
			a = octa[m] + '0';
			_putchar(a);
		}
		return (count);
	}
}
