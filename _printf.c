#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string to be printed
 * @...: variable argument list
 *
 * This function takes a format string @format and a variable argument list
 * @args, and prints formatted output to stdout according to the format string.
 * The format string can contain conversion specifiers such as %s, %c, and %%,
 * which are handled by the convert_match array of conversion specifiers and
 * corresponding functions. If an unknown conversion specifier is encountered,
 * the function prints the character as-is. The function returns the number of
 * characters printed to stdout, or -1 if an error occurs.
 *
 * Return: number of characters printed, or -1 if an error occurs
 */
int _printf(const char *format, ...)
{
	match_specifier m[] = {
		{"%s", print_str}, {"%c", print_char},
		{"%%", print_percent_37},
		{"%d", print_nmb}, {"%i", print_nmb},
		{"%r", print_str_reverso}, {"%R", print_rot13},
		{"%u", print_unsigned_int}, {"%o", print_octa},
		{"%x", print_hex_low}, {"%X", print_HEX_upp},
		{"%p", print_address}, {"%b", print_bin},
		{"%S", S_conversion}
		/*process...*/
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].op[0] == format[i] && m[j].op[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}

/**
 * print_buffer - Writes characters from
 * a buffer to the standard output stream.
 *
 * @buffer: A character array containing
 *  the characters to write.
 * @buff_index: A pointer to an integer
 * representing the current index in the buffer.
 *              This value is updated to 0 after the characters are written.
 */
void print_buffer(char buffer[], int *buff_index)
{
	if (*buff_index > 0)
		write(1, &buffer[0], *buff_index);

	*buff_index = 0;
}
