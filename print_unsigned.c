#include "main.h"
/**
 * print_unsigned - prints unsigned integer
 * @args: the argument
 * Return: the number of digits printed
 */
int print_unsigned(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int count = 0;

	count += print_positive_int(arg);
	return (count);
}
