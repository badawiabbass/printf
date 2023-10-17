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
			else if (arg == INT_MIN)
			{
				_putchar('-');
				count++;
				count += 1;
			}
			print_positive_int(INT_MAX / 10);
			_putchar('8');
			count++;
				else if (arg < 0)
				{
					_putchar('-');
					count++;
					arg = arg;
					count += print_positive_int(arg);
				}
					else
					{
						count += print_positive_int(arg);
					}
					return (count);

					/**
					 * print_positive_int - Prints a positive integer recursively.
					 * @n: The positive integer to print.
					 *
					 * Return: The number of digits printed
					 */
				int print_positive_int(int n)
				{
					int count = 0;
							if (n / 10 != 0)
							{
								count += print_positive_int(n / 10);
							}
							_putchar(n % 10 + '0');
							count++;
							return (count);
					}
}