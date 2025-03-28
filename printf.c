#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * _printf - Custom implementation of printf
 * @format: The format string
 *
 * Return: Number of characters printed
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
int _printf(const char *format, ...)
{
int count = 0, i = 0;
va_list args;
if (!format)
return (1);
va_start(args, format);
while (format[i] != '\0')
{
if (format[i] == '%')
{
i++;
if (format[i] == 's')
{
const char *str = va_arg(args, const char *);
while (*str != '\0')
count += _putchar(*str++);
}
else if (format[i] == 'c')
{
count += _putchar(va_arg(args, int));
}
else if (format[i] == '%')
{
count += _putchar('%');
}
else
{
i += _putchar('%');
count += _putchar(format[i]);
}
}
else
{
count += _putchar(format[i]);
}
i++;
}
va_end(args);
return (i);
}
