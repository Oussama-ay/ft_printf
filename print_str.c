#include "ft_print.h"

int	print_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write (1, str + i++, 1);
	return (i);
}
