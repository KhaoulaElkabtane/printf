#include "main.h"

/**
 * S_conversion - Converts string with special characters escaped.
 * @args: A va_list containing the arguments.
 * If the input string is NULL,
 * it is treated as "(null)".
 *
 * Return: The number of characters printed.
 */

int S_conversion(va_list args)
{
	int count = 0;
	char *s = va_arg(args, char *);
	int i;

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar("0123456789ABCDEF"[((unsigned char)s[i]) >> 4]);
			count += _putchar("0123456789ABCDEF"[((unsigned char)s[i]) & 0xF]);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}
	return (count);
}
