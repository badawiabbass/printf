#include "main.h"
printf_t formats[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_per},
	{'d', print_int},
	{'i', print_int},
	{0, NULL}
};
