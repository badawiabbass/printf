#ifndef MAIN_H
#define MAIN_H
#define BUF_SIZE 1024
#define BUF_FLUSH_SIZE -1
#define BUF_FLUSH_CHAR '\n'


#include <stdarg.h>
#include <unistd.h>
int print_str(va_list args);
int print_char(va_list args);
int print_per(va_list args);
int _putchar(int c);
int print_int(va_list args);
int print_positive_int(int n);
int print_binary(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_float(va_list args);
int print_double(va_list args);
int print_long_double(va_list args);
int print_pointer(va_list args);
int print_unsigned_int(va_list args);
int print_unsigned_long(va_list args);
int print_unsigned_long_long(va_list args);
int print_unsigned_char(va_list args);
int print_unsigned_short(va_list args);
typedef struct printf_s
{
char specifier;
int (*f)(va_list args);
} printf_t;
extern printf_t formats[];
int _printf(const char *format, ...);
#endif
