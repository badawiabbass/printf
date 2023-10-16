#include "main.h"

/**
 * _putchar - write a characters to stander output
 * @c: The character to be written
 *
 * Return: on success, the character is written; on failure, -1 is returned.
 */

int _putchar(int c)
{
	return write(1, &c, 1);
}
