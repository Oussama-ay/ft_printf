/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:29 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:44:59 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

int	print_uint(unsigned int n)
{
	unsigned int	d;
	int				count;

	d = 1;
	count = 0;
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
