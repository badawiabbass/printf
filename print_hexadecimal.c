#include "main.h"
/**
 * print_hexadecimal - prints numers in hexadecimal
 * @num: the number to be converted
 * @uppercase: if uppercase
 * Return: the number of digits printed
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	int count = 0;
	const char *hexdigits = "0123456789abcdef";

	if (uppercase)
		hexdigits = "0123456789ABCDEF";
	if (num / 16 != 0)
	{
		count += print_hexadecimal(num / 16, uppercase);
	}
	_putchar(hexdigits[num % 16]);
	count++;
	return (count);
}
