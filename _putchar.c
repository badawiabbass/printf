#include "main.h"

/** 
 * putchar for printing integers 
 *
 * Return: write with number and character
 */

int _putchar(int c)
{
	return write(1, &c, 1);
}
