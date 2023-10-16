
#include "main.h"

int _putchar(int c)
printf_t formats[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_per},
	{'d', print_int},
	{'i', print_int},
	{'b', print_binary},
	{'u', print_unsigned},
	{0, NULL}
}