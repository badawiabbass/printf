#include "main.h"
/**
 * print_octal - prints numbers in octal representation
 * @args: the argument
 * Return: the number of digits printed
 */
int print_octal(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int j, count = 0, octal[32], i = 0;

	if (arg == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (arg > 0)
	{
		octal[i] = arg % 8;
		arg /= 8;
		i++;
	}
	for (j = i - 1; j >= o; j--)
	{
		_putchar(octal[j] + '0');
		count++;
	}
	return (count);
}
