#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
int	ft_printf(const char *format, ...);
int	print_address(void *p);
int	print_char(char c);
int	print_hexa(int n, char c);
int	print_int(int	n);
int	print_uint(unsigned int n);
int	print_str(char *str);

#endif