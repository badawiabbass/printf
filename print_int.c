#include "main.h"

/**
 * print_int - for print integers
 * @args: the argument of integers
 * Return: 1
 */
int print_int(va_list args)
{
	int count = 0;
	int arg = va_arg(args, int);

	if (arg == 0)
	{
		_putchar('0');
		count++;
	}

	if (arg < 0)
	{
		_putchar('-');
		arg = -arg;
		count++;
	}
	count += print_positive_int(arg);

	return (count);
}

int print_positive_int(int n)

{
	int count = 0;

	if (n / 10 != 0)
	{
		count += print_positive_int(n / 10);
	}
	_putchar(n % 10 + '0');
	return (count + 1);
}
