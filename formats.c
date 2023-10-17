#include "main.h"
printf_t formats[] = {
	{'c', print_char},
	{'s', print_str},
	{'%', print_per},
	{'d', print_int},
	{'i', print_int},
	{'b', print_binary},
	{'u', print_unsigned},
	{'o', print_octal},
	{'x', print_hex},
	{'X', print_hex_upper},
	{0, NULL}
};
