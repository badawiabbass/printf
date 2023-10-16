#include "main.h"

<<<<<<< HEAD

int _putchar(int c)
{
        return write(1, &c, 1);
}
int _printf(const char *format, ...);
=======
/** 
 * putchar for printing integers 
 *
 * Return: write with number and character
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
