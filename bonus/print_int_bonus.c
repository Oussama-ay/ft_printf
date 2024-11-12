/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:11:16 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:38:44 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

int	print_int_b(int n, t_flags forme)
{
	int	count;

	count = 0;
	if (forme.plus && n >= 0)
		count += print_char('+');
	else if (forme.space && n >= 0)
		count += print_char(' ');
	count += print_int(n);
	return (count);
}
