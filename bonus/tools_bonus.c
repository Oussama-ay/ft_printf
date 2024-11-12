/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 17:33:42 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/11 21:10:37 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bonus.h"

t_flags	setup_flags(void)
{
	t_flags	flags;

	flags.space = 0;
	flags.plus = 0;
	flags.hash = 0;
	return (flags);
}

int	ft_find(char c, char *str)
{
	int	i;

	if (str == NULL)
		return (0);
	i = 0;
	while (str[i] != 0)
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}
