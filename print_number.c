#include "main.h"

/**
 * print_number - Prints an integer to stdout.
 * @n: The integer to print.
 * Return: Number of digits printed.
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_number(num / 10);

	count += _putchar((num % 10) + '0');
	return (count);
}
