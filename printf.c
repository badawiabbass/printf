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
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(format);
			count++;
			format++;
		}
		else
		{
			format++;
			int char_written = 0;
			int j = 0;

			while (formats[j].specifier)
			{
				if (*format == formats[j].specifier)
				{
					char_written = formats[j].f(args);
					count += char_written;
					getchar();
				}
				j++;
			}
			if (!formats[j].specifier)
			{
				_putchar('%');
				count++;
				_putchar(*format);
				count++;
			}
				format++;
				i++;
		}
	}
	va_end(args);
	return (count);
}
