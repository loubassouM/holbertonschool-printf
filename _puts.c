#include "main.h"
/**
 * _puts - Writes a string to stdout.
 * @str: String to print.
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
	int i = 0;
	if (!str)
	return (0);
	while (*str)
		i += _putchar(*str++);
	return i;
}
