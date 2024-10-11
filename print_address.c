#include "ft_printf.h"

int	print_address(void *p)
{
    int sum;

    sum = print_str("0x");
    sum += print_hexa(*(int *)p, 'x');
    return (sum);
}