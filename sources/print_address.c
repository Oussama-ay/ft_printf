/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_address.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:15 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:43:24 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

static int	print_hexa2(unsigned long n)
{
	unsigned long	d;
	int				count;
	char			*t;

	t = "0123456789abcdef";
	d = 1;
	count = 0;
	while (n / d >= 16)
		d *= 16;
	while (d)
	{
		count += print_char(t[n / d]);
		n = n % d;
		d /= 16;
	}
	return (count);
}

int	print_address(unsigned long p)
{
	int	sum;

	if (!p)
		return (print_str("(nil)"));
	sum = print_str("0x");
	sum += print_hexa2(p);
	return (sum);
}
