/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:41:26 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 15:11:38 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

static void	set_flag(const char c, t_flags *forme)
{
	if (c == ' ')
		forme->space = 1;
	else if (c == '+')
		forme->plus = 1;
	else if (c == '#')
		forme->hash = 1;
}

static void	get_flags(const char *str, t_flags *forme)
{
	int	i;

	i = 1;
	*forme = setup_flags();
	while (ft_find(str[i], "+ #") == 1 && str[i] != 0)
		set_flag(str[i++], forme);
	forme->type = str[i];
}

static int	the_hard_work(va_list arg, char const *str, t_flags *forme)
{
	int	count;

	get_flags(str, forme);
	if (forme->type == 'i' || forme->type == 'd')
		return (print_int_b(va_arg(arg, int), *forme));
	else if (forme->type == 'c')
		return (print_char(va_arg(arg, int)));
	else if (forme->type == 's')
		return (print_str(va_arg(arg, char *)));
	else if (forme->type == 'p')
		return (print_address(va_arg(arg, unsigned long)));
	else if (forme->type == 'u')
		return (print_uint(va_arg(arg, unsigned int)));
	else if (forme->type == 'x' || forme->type == 'X')
		return (print_hexa_b(va_arg(arg, int), forme->type, *forme));
	else if (forme->type == '%')
		return (print_char('%'));
	count = print_char('%');
	if (forme->hash)
		count += print_char('#');
	if (forme->plus)
		count += print_char('+');
	if (ft_find(forme->type, "iduscxX") == 0)
		count += print_char(forme->type);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int			length;
	va_list		arg;
	t_flags		forme;

	if (!format)
		return (-1);
	va_start(arg, format);
	length = 0;
	while (*format)
	{
		if (*format == '%')
		{
			length += the_hard_work(arg, format++, &forme);
			while (ft_find(*format, "+ #") && *format != 0)
				format++;
			if (*format == forme.type && *format != 0)
				format++;
		}
		else
			length += print_char(*format++);
	}
	va_end(arg);
	return (length);
}
