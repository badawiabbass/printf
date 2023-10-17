#include "main.h"
/**
 * print_hexadecimal - prints the integer in hexadecimal
 * @num: o for lower 1 for upper
 * @uppercase: the uppercase
 * Return: the number of digits printed
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
	int count = 0;
	const char *hdigits = "0123456789abcdef";

	if (uppercase)
		hdigits = "0123456789ABCDEF";
	if (num / 16 != 0)
		count += print_hexadecimal(num / 16, uppercase);
	_putchar(hdigits[num % 16]);
	count++;
	return (count);
}
