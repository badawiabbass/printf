#include "main.h"
/**
 * _printf - function for printing several type of data to the standard output
 * @format: the format string that we want to print
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int j, count = 0, i = 0,
	va_start(args, format);
	va_list arg;

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
			while (format[i].specifier)
			{
				if (format[i + 1] == format[j].specifier)
				{
					count += format[j].f(args);
				}
				j++;

			}
			i += 2;

		}

	}
	va_end(args);
	return (count);


}
