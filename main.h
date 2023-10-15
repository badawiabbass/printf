#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
int print_str(va_list args);
int print_char(va_list args);
int print_per(va_list args);

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
int print_str(va_list args)
 {
     char *str = va_arg(args, char *);
     int count = 0;
     int j = 0;
     while (str[j])
        {
            _putchar(str[j]);
            count++;
            j++;
        }
        return (count);
 }
 int print_char(va_list args)
{
    int count = 0;
    char arg1 = va_arg(args, int);
    _putchar(arg1);
    count++;
    return (count);
}
int print_per(va_list args)
{
	(void)args;
    _putchar('%');
    return (1);
}
#endif
