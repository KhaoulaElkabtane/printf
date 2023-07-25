#include "main.h"
/**
 * print_hex_long - Prints the hexadecimal representation.
 * @n: The unsigned long integer to be converted and printed.
 *
 *
 * Return: The number of hexadecimal digits in the output.
 */

int print_hex_long(unsigned long int n)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int temp = n;

	while (n / 16 != 0)
	{
		n /= 16;
		count++;
	}
	count++;

	array = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
