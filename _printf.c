#include "main.h"
#include<stdlib.h>
/**
 * _printf - printf function
 * @format: list of arguments
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	match_specifier member[] = {
		{"%s", print_str}, {"%c", print_char}, {"%%", print_percent_37},
		{"%i", print_nmb}, {"%d", print_nmb}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_octa}, {"%x", print_hex_low},
		{"%X", print_HEX_upp}, {"%S", S_conversion}, {"%p", print_address},
		{"%r", print_str_reverso}, {"%R", print_rot13}
	};
	va_list args;
	int i = 0, j, count = 0, match = 0;

	va_start(args, format);

	if ((format == NULL) || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		match = 0;
		j = 13;
		while (j >= 0)
		{
			if (member[j].op[0] == format[i] && member[j].op[1] == format[i + 1])
			{
				count += member[j].f(args);
				i = i + 2;
				match = 1;
				break;
			}
			j--;
		}
		if (!match)
		{
			_putchar(format[i]);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
