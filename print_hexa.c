#include "ft_printf.h"

int	f2_print(char *t, int n)
{
	int	s;

	if (n <= 15)
		return (print_char(t[n]));
	s = print_int(n / 16);
	print_char(t[n %  16]);
	return (1 + s);
}

int	print_hexa(int n, char c)
{
	char	*t;

	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcef";
	return (f2_print(t, n));
}