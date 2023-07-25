#include "main.h"

/**
 * print_str - returns the lenght of a printed string.
 * @s: Type char pointer
 * Return: count of string.
 */
int _strlen(char *s);

int print_str(va_list args)
{
	char *s;
	int i, count;

	s = va_arg(args, char *);
	if (s == NULL)
	{
		s = "(null)";
		return (6);
	}
	else
	{
		count = _strlen(s);
		for (i = 0; i < count; i++)
			_putchar(s[i]);
		return (count);
	}
}

/**
 * _strlen - Returns the lenght of a string.
 * @s: type char pointer.
 * Return: length of string.
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
