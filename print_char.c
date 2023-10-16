#include "main.h"
/**
 * print_char - for printing characters
 * @args: the argument character
 * Return: 1
 */
int print_char(va_list args)
{
	int count = 0;
	char arg = va_arg(args, int);

	if (arg == '\0')
	{
		_putchar('\\');
		_putchar('0');
		count += 2;
	}
	else
	{
		_putchar(arg);
		count++;
	}
	return (count);
}
