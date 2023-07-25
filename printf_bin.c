#include "main.h"
#include <unistd.h>

/**
 * print_bin - Print the binary representation of an unsigned integer.
 * @args: The va_list that contains the unsigned integer to be printed.
 *
 * Return: The number of binary digits printed.
 */

int print_bin(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int count = 0;
	int m = 0;
	int n = 0;
	int binary[64];
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
			binary[m] = arg % 2;
			arg = arg / 2;
			count++;
			m++;
		}
		for (n = m - 1; n >= 0; n--)
		{
			a = binary[n] + '0';
			_putchar(a);
		}
		return (count);
	}
}
