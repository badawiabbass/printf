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
		return (count);
		else if (arg == INT_MAX)
		{
			_putchar('-');
			count++;
			count += 1;
			return (count);
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
			else
			{
				count += print_positive_int(arg);
			}
			return (count);
		}
  /**
   * print_positive_int - Prints a positive integer recursively.
   * @n: The positive integer to print.
   *
  */
		int print_positive_int(int n)
		{
			_putchar(n / 10 + '0');
			count++;
		}
		return (count);
	}
}
