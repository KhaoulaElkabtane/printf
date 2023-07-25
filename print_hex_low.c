#include "main.h"

/**
 * print_hex_low - Converts and prints to the hex.
 * @args: A va_list containing the arguments.
 *
 * Return: The number of characters printed.
 */

int print_hex_low(va_list args)
{
	unsigned int arg;
	char hex_num[] = "0123456789abcdef";
	char hex[32];
	int i = 0;
	int n;
	int count = 0;

	arg = va_arg(args, unsigned int);

	if (arg == 0)
	{
		hex[i++] = '0';
		count++;
	}
	else
	{
		while (arg > 0)
		{
			hex[i++] = hex_num[arg % 16];
			arg = arg / 16;
		}
	}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(hex[n]);
		count++;
	}
	return (count);
}
