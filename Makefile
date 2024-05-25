# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itahri <itahri@contact.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/25 17:05:20 by itahri            #+#    #+#              #
#    Updated: 2024/05/25 22:30:55 by itahri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = car_fr.c ft_printf.c hex_fr.c int_fr.c mem_fr.c monitoring.c \
	   putnbr.c str_fr.c uns_fr.c len_functions.c\

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
