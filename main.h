#ifndef _PRINT_H
#define _PRINT_H


#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define BUFF_SIZE 1024
#define BUF_FLUSH_SIZE -1

#define _putchar(c) write(1, &c, 1)

#define NULL_STRING "null"

#define PARAM_INIT (0, 0, 0, 0, 0, 0, 0, 0, 0, 0)

#define  "CONVERT_LOWERCASE" : 1
#define  "CONVERT_UNSIGNED"  : 2

/**
 * struct _parameters - parameters struct
 *
 * @unsigned: flag to indicate if the value is unsigned
 * @plus_flag: on if plus_flag is specified
 * @hashtag_flag: on if hashtag_flag is specified
 * @zero_flag: on if zero_flag is specified
 * @minus_flag: on if minus_flag is specified
 *
 * @width: width of the field specified
 * @precision: precision of the field specified
 *
 * @h_modifier: on if h_modifier is specified
 * @l_modifier: on if l
 *
 */
typedef struct _parameters
{
        /* data */
        unsigned int unsign        :1;

        unsigned int plus_flag     : 1;
        unsigned int space_flag    : 1;
        unsigned int zero_flag     : 1;
        unsigned int minus_flag    : 1;
        unsigned int hashtag_flag  : 1;

        unsigned int width;
        unsigned int precision;

        unsigned int h_modifier    : 1;
        unsigned int l_modifier    : 1;

};
params_t;

/**
 * struct specifier - struct token
 *
 * @specifier: format specifier token
 * f: the function to be called
 *
*/
typedef struct specifier
{
        char *specifier;
        int (*f)(params_t, va_list);
} specifier_t;

/*_put.c moudel */
int _puts(char *str);
int _putchar(int c);
int print_int(va_list args);
int print_positive_int(int n);
typedef struct printf
{
	char specifier;
	int (*f)(va_list args);
} printf_t;
extern printf_t formats[];
int _printf(const char *format, ...);

#endif
                                                                                              