#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int _putchar(int c)
{
	return write(1, &c, 1);
}
int _printf(const char *format, ...);
#endif
