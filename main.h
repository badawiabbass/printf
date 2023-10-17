#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int print_str(va_list args);
int print_char(va_list args);
int print_per(va_list args);
int _putchar(int c);
int print_int(va_list args);
int print_positive_int(int n);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);
int print_unsigned(va_list args);
int print_hexadecimal(unsigned int num, int uppercase);

typedef struct printf
{
	char specifier;
	int (*f)(va_list args);
} printf_t;
extern printf_t formats[];
int _printf(const char *format, ...);
#endif
