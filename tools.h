/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:45:22 by oayyoub           #+#    #+#             */
/*   Updated: 2024/11/12 12:45:52 by oayyoub          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <stdarg.h>

int	print_address(unsigned long p);
int	print_char(char c);
int	print_hexa(int n, char c);
int	print_int(int n);
int	print_uint(unsigned int n);
int	print_str(char *str);

#endif
