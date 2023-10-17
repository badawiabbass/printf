<<<<<<< HEAD
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

	va_start(args, format);
	if (format == NULL)
		return (-1);
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
				{
					count += formats[j].f(args);
				}
				j++;

			}
			i += 2;

		}

	}
	va_end(args);
	return (count);
}
=======
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

	va_start(args, format);
	if (format == NULL)
		return (-1);
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
				{
					count += formats[j].f(args);
				}
				j++;

			}
			i += 2;

		}

	}
	va_end(args);
	return (count);


}
>>>>>>> f061240f53523e167a4ea0ab97d331d20a7fb7ea
