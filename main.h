#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int print_str(va_list args);
int print_char(va_list args);
int print_per(va_list args);
int _putchar(int c);
int print_int(va_list args);
typedef struct printf
{
	char specifier;
	int (*f)(va_list args);
} printf_t;
extern printf_t formats[];
int _printf(const char *format, ...);
#endif
