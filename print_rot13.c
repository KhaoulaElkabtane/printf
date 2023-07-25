#include "main.h"

/**
 * print_rot13 - Print a string using the ROT13 substitution cipher.
 * @args: The va_list that contains the string to be printed.
 *
 * Return: The number of characters printed.
 */

int print_rot13(va_list args)
{
	int i, j, count = 0;
	int k = 0;
	char *arg;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	arg = va_arg(args, char *);
	if (arg == NULL)
		arg = "(null)";
	for (i = 0; arg[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (a[j] == arg[i])
			{
				_putchar(b[j]);
				count++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(arg[i]);
			count++;
		}
	}
	return (count);
}
