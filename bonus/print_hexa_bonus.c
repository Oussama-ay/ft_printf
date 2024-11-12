/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:26:19 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 15:10:51 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	print_hexa_b(int n, char c, t_flags forme)
{
	int	count;

	count = 0;
	if (forme.hash && n != 0)
	{
		if (c == 'x')
			count += print_str("0x");
		else
			count += print_str("0X");
	}
	return (count + print_hexa(n, c));
}
