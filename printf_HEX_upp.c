#include "main.h"

/**
 * printf_HEX_upp - Printf the uppercase hexadecimal representation
 *                 of an unsigned integer.
 * @args: The va_list that contains the unsigned integer to be printed.
 *
 * Return: The number of hexadecimal digits printed.
 */

int printf_HEX_upp(va_list args)
{
	unsigned int arg;
	char d;
	int count = 0;
	int j = 0;
	int k = 0;
	int upp_hex[64];

	arg = va_arg(args, unsigned int);
	if (arg == 0)
	{
		d = arg + '0';
		write(1, &d, 1);
		return (count);
	}
	else
	{
		while (arg > 0)
		{
			upp_hex[j] = arg % 16;
			arg = arg / 16;
			count++;
			j++;
		}
		for (k = j - 1; k >= 0; k--)
		{
			if (upp_hex[k] > 9)
			{
				d = 'A' + (upp_hex[k] % 10);
			}
			else
			{
				d = upp_hex[k] + '0';
			}
			_putchar(d);
		}
		return (count);
	}
}
