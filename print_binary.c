#include "main.h"
/**
 * print_binary - prints the unsigned integer in binary
 * @args: the argument
 * Return: the count of numbers printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0, j;
	int binary[32], i = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
		return (count);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}
	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(binary[j] + '0');
		count++;
	}
	return (count);
}
