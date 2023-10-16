#include "main.h"

/**
 * putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success 1 is returned, otherwise -1 is returned and errno is set
 * On error, -1 is returned, and errno is set appropriately.
 */
int putchar(int c)
{
	return (write(1, &c, 1));
}
