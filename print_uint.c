#include "ft_print.h"

int	print_uint(unsigned int n)
{
	int	s;

	if (n <= 9)
	{
		print_char(n + '0');
		return (1);
	}
	s = print_int(n / 10);
	print_char(n % 10 + '0');
	return (1 + s);
}
