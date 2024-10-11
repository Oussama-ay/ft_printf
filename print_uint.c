#include "ft_printf.h"

int	print_uint(unsigned int n)
{
	int	s;

	if (n <= 9)
		return (print_char(n + '0'));
	s = print_int(n / 10);
	print_char(n % 10 + '0');
	return (1 + s);
}
