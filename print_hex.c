#include "main.h"
/**
 * print_hex - prints hex integers
 * @args: the arguments
 * Return: the number of digits printed
 */
int print_hex(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int count = 0;

	count += print_hexadecimal(arg, 0);
	return (count);
}

/**
 * print_hex_upper - print uppercase integers
 * @args: the argument
 * Return: the number of digit printed
*/
int print_hex_upper(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);
	int count = 0;

	count += print_hexadecimal(arg, 1);
	return (count);
}
