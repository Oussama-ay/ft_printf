/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:30:25 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/11 11:12:46 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../tools.h"

int	print_str(char *str)
{
	int	i;

	if (!str)
		return (print_str("(null)"));
	i = 0;
	while (str[i])
		write (1, str + i++, 1);
	return (i);
}
