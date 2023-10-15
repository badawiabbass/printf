#include "main.h"
printf_t formats[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_per},
	{0, NULL}
};
