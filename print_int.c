#include "main.h"

/**
<<<<<<< HEAD
 * print_int - for print integers
 * @args: the argument of integers
 * Return: 1
 */

=======
 * print_int - to print integers
 * @args: The argument integers
 * Return: 1
 */
>>>>>>> refs/remotes/origin/master
int print_int(va_list args)
{
	int count = 0;
	int arg = va_arg(args, int);
<<<<<<< HEAD

	if (arg == 0)
	{
		_putchar('0');
=======
	
	if (arg == 0)
	{
		_putchar('-');
>>>>>>> refs/remotes/origin/master
		count++;
	}
	if (arg < 0)
	{
		_putchar('-');
		arg = -arg;
		count++;
	}
<<<<<<< HEAD
	count += print_positive_int(arg);

	return (count);
}

/** print a positive number */
int print_positive_int(int n)

{
	int count = 0;

	if (n / 10 != 0)
	{
		count += print_positive_int(n / 10);
=======

	count + = print_positive_int(arg);
	return count;
}

/** printing a positive number */

int print_positive_int(int n)
{
	int count = 0;
	
	if (n / 10 != 0)
	{
		count + = print_positive_int (n / 10);
>>>>>>> refs/remotes/origin/master
	}
	_putchar(n % 10 + '0');
	return (count + 1);
}
<<<<<<< HEAD
=======

>>>>>>> refs/remotes/origin/master
