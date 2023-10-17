#include "main.h"

/**
 * print_hex - the function print hex representation of num
 * Prameter:
 *args num - It takes an integer as input and prints its hexadecimal
 *@args: - An array of integers to be printed in hexadecimal
 *
 * Return: count
*/
int print_hex(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);

	int count = 0;

	count += print_hexadecimal(arg, 0);

	/**
	 * 0 means lowercase letters
	 */
	return (count);
/**
 *Print_hex_upper - Prints an uppercase hexadecimal representation
 *Parameter:
 *@args:  An array of int be printed in hex
 * num_args - The number of elements in the 'args' array
 *
 * Return: count
 */
int print_hex_upper(va_list args)
{

	unsigned int args = va_arg(args, unsigned int);
	int count = 0;

	count += print_hex(arg, 1);
}
return (count);
}
