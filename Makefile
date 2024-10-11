CC = cc
FLAGS = -Wall -Wextra -Werror
NAME =  libftprintf.a
SRCS =	ft_printf.c print_char.c  print_int.c  print_uint.c\
		print_address.c  print_hexa.c  print_str.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		ar rc $(NAME) $(OBJS)

$(OBJS): %.o: %.c
		$(CC) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean:	clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re