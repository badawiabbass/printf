#include "main.h"
/**
 * print_per - for printing %
 * @args: the argument
 * Return: i
 */
int print_per(va_list args)
{
	int count;
	(void)args;

	count = 0;
	_putchar('%');
	count++;
	return (1);
}
