#include "ft_printf.h"

int	print_int(int	n)
{
	int	s;

	if (n == -2147483648)
	{
		print_str("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		print_char('-');
		print_int(-n);
	}
	if (n <= 9)
	{
		print_char(n + '0');
		return (1);
	}
	s = print_int(n / 10);
	print_char(n % 10 + '0');
	return (1 + s);
}
