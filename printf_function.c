#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string to be printed
 * @...: variable argument list
 *
 * Define a struct to hold format
 * specifiers and their handling functions
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	match_specifier x[] = {
		{"%s", print_str}, {"%c", print_char}, {"%%", print_percent_37},
		{"%i", print_nmb}, {"%d", print_nmb}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_octa}, {"%x", print_hex_low},
		{"%X", print_HEX_upp}, {"%S", S_conversion}, {"%p", print_address},
		/**{"%r", print_str_reverso}, {"%R", print_rot13}*/};
	int i = 0, j, count = 0, matching;
	const char *s;

	va_list(args);
	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	s = format;
	while (s[i] != '\0')
	{
		matching = 0;
		j = 13;
		while (j >= 0)
		{
			if (x[j].op[0] == s[i] && x[j].op[1] == s[i + 1])
			{
				count += x[j].f(args);
				i = i + 2;
				matching = 1;
				break;
			}
			j--;
		}
		if (matching == 0)
		{
			_putchar(s[i]);
			count++, i++;
		}
	}
	va_end(args);
	return (count);
}
