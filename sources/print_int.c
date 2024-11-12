/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:03 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:44:17 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

int	print_int(int n)
{
	int	d;
	int	count;

	if (n == -2147483648)
		return (print_str("-2147483648"));
	d = 1;
	count = 0;
	if (n < 0)
	{
		n = -n;
		count += print_char('-');
	}
	while (n / d > 9)
		d *= 10;
	while (d)
	{
		count += print_char(n / d + '0');
		n = n % d;
		d /= 10;
	}
	return (count);
}
