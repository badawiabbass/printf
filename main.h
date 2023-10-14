#ifndef MAIN_H
#define MAIN_H
int _putchar(int c)
{
	return write(1, &c, 1);
}
int _printf(const char *format, ...);
#endif
