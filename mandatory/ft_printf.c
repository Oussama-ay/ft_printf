/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:06 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:42:06 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.h"

static int	find_specifier(va_list arg, char const specifier)
{
	if (specifier == 'i' || specifier == 'd')
		return (print_int(va_arg(arg, int)));
	else if (specifier == 'c')
		return (print_char(va_arg(arg, int)));
	else if (specifier == 's')
		return (print_str(va_arg(arg, char *)));
	else if (specifier == 'p')
		return (print_address(va_arg(arg, unsigned long)));
	else if (specifier == 'u')
		return (print_uint(va_arg(arg, unsigned int)));
	else if (specifier == 'x' || specifier == 'X')
		return (print_hexa(va_arg(arg, int), specifier));
	else if (specifier == '%')
		return (print_char('%'));
	else
		return (print_char('%') + print_char(specifier));
}

int	ft_printf(const char *format, ...)
{
	int		length;
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
			length += find_specifier(arg, *format);
		}
		else
			length += print_char(*format);
		format++;
	}
	va_end(arg);
	return (length);
}
