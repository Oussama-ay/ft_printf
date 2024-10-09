#include "ft_printf.h"

int	f_print(char *t, int n)
{
	int	s;

	if (n <= 15)
		return (print_char(t[n]));
	s = print_int(n / 16);
	print_char(t[n %  16]);
	return (1 + s);
}

int	print_lhexa(int n)
{
	char	*t;

	t = "0123456789abcdef";
	return (f_print(t, n));
}
