#include "main.h"
/**
 * print_str - prints a string
 * @args: the argument that will be printed
 * Return: the number of characters printed
 */
int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;
	int j = 0;

	while (str[j])
	{
		_putchar(str[j]);
		count++;
		j++;
	}
	return (count - 1);
}
