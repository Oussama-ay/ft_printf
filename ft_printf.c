#include "ft_printf.h"

int	find_flag(va_list arg, char const flag)
{
	if (flag == 'i' || flag == 'd')
		return (ft_print_int(va_list(arg, int)));
	else if (flag == 'c')
		return (ft_print_char(va_list(arg, char)));
	else if (flag == 's')
		return (ft_print_str(va_list(arg, char *)));
	else if (flag == 'p')
		return (ft_print_address(va_list(arg, void *)));
	else if (flag == 'u')
		return (ft_print_uint(va_list(arg, unsigned int)));
	else if (flag == 'x')
		return (ft_print_lhexa(va_list(arg, int)));
	else if (flag == 'X')
		return (ft_print_uhexa(va_list(arg, int)));
	else if (flag == '%')
		return (ft_print_char('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int	length;
	va_list	arg;

	if (!format)
		return (-1);
	va_start(arg, format);
	length = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			length += find_flag(arg, *format);
		}
		else
			length += ft_print_char(*format);
		format++;
	}
	va_end(argc, format);
	return (length);
}
