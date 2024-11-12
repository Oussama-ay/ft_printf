/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:21 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/11 11:12:41 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

static int	f2_print(char *t, int n)
{
	unsigned int	d;
	int				count;

	d = 1;
	count = 0;
	while (n / d > 15)
		d *= 16;
	while (d)
	{
		count += print_char(t[n / d]);
		n = n % d;
		d /= 16;
	}
	return (count);
}

int	print_hexa(int n, char c)
{
	char	*t;

	if (c == 'X')
		t = "0123456789ABCDEF";
	else
		t = "0123456789abcdef";
	return (f2_print(t, n));
}
