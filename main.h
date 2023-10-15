#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int print_str(va_list args);
int print_char(va_list args);
int print_per(va_list args);
int _putchar(int c);
typedef struct printf
{
	char specifier;
	int (*f)(va_list args);
} printf_t;

printf_t formats[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_per}
};
int _putchar(int c)
{
	return write(1, &c, 1);
}
int _printf(const char *format, ...);
#endif
