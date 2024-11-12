/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:43:03 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 15:11:07 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include "../tools.h"

typedef struct s_fl
{
	int		space;
	int		plus;
	int		hash;
	char	type;
}	t_flags;

t_flags	setup_flags(void);

int		ft_find(char c, char *str);
int		ft_printf(const char *format, ...);
int		print_int_b(int n, t_flags forme);
int		print_hexa_b(int n, char c, t_flags forme);

#endif