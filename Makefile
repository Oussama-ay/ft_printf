# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oayyoub <oayyoub@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/29 11:30:12 by oayyoub           #+#    #+#              #
#    Updated: 2024/11/12 12:51:55 by oayyoub          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
FLAGS = -Wall -Wextra -Werror
NAME =	libftprintf.a

SOURCES =	sources/print_int.c sources/print_char.c sources/print_uint.c\
		sources/print_address.c sources/print_hexa.c sources/print_str.c

MANDATORY =	mandatory/ft_printf.c
BONUS =	bonus/ft_printf_bonus.c bonus/print_int_bonus.c bonus/tools_bonus.c\
		bonus/print_hexa_bonus.c

SRCS = $(MANDATORY) $(SOURCES)
BONUS_SRCS = $(BONUS) $(SOURCES)

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS) $(BONUS_OBJS)

fclean:	clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re