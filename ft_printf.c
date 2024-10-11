#include "ft_printf.h"

int	find_flag(va_list arg, char const flag)
{
	if (flag == 'i' || flag == 'd')
		return (print_int(va_arg(arg, int)));
	else if (flag == 'c')
		return (print_char(va_arg(arg, int)));
	else if (flag == 's')
		return (print_str(va_arg(arg, char *)));
	else if (flag == 'p')
		return (print_address(va_arg(arg, void *)));
	else if (flag == 'u')
		return (print_uint(va_arg(arg, unsigned int)));
	else if (flag == 'x' || flag == 'X')
		return (print_hexa(va_arg(arg, int), flag));
	else if (flag == '%')
		return (print_char('%'));
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
			length += print_char(*format);
		format++;
	}
	va_end(arg);
	return (length);
}