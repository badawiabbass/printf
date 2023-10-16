#include "main.h"
/**
 * _printf - function for printing several type of data to the standard output
 * @format: the format string that we want to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int j, count = 0, i = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
		}
		else
		{
			j = 0;
			while (formats[j].specifier)
			{
				if (format[i + 1] == formats[j].specifier)
					count += formats[j].f(args);
				j++;
			}
			i += 2;
		}
	}
	va_end(args);
	return (count);
}
