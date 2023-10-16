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

/*_print_function.c moudel */

int _print_char(va_list ap, params_t *params);
int _print_string(va_list ap, params_t *params);
int _print_int(va_list ap, params_t *params);
int _print_s(va_list ap, params_t *params);
int _print_percent(va_list ap, params_t *params);

/* number.c module */
char *convert(long int num, int base, int flags, params_t *params);
int _print_unsigned(va_list ap, params_t *params);
/* specifier.c module */
int (*get_specifier(char *s))(va_list, params_t *params);
int _get_print_fun(char *s, va_list ap, params_t *params);
int _get_flag(char *s, params_t ap, *params);
int _get_modifier(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list ap);

/*convert_number.c moudel */
int _print_hex(va_list ap, params_t *params);
int _print_HEX(va_list ap, params_t *params);
int _print_binary(va_list ap, paramas_t *params);
int _print_octal(va_list ap, params_t *params);

/* simple_printers.c module */
int _print_from_to(char *start, char *stop, char *except);
int _print_rev(va_list ap, params_t *params);
int _print_rot13(va_list ap, params_t *oarams);

/* print_number.c module */
int _isdigit(int c)
int _strlen(char *s)
int _print_number(char *str, params_t *params);
int _print_number_right_shift(char *str, params_t *params);
int _print_number_left_shift(char *str, params_t *params);

/* params.c module */
void _init_params(params_t *params, va_list ap);

/* string_fields.c module */
char *get_precision(char *p, params_t *params, va_list ap);

/* _printf.c module */
int _printf(const char *format, ...);

#endif
                                                                                              