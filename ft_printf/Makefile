#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hcaspar <hcaspar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/26 14:47:39 by hcaspar           #+#    #+#              #
#    Updated: 2016/03/20 21:52:24 by hcaspar          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libftprintf.a

SRCS =	srcs/ft_printf.c				\
		srcs/ft_printf_conv.c			\
		srcs/ft_printf_conv_bis.c		\
		srcs/ft_printf_length.c			\
		srcs/ft_printf_percent.c		\
		srcs/ft_printf_char.c			\
		srcs/ft_printf_int.c			\
		srcs/ft_printf_string.c			\
		srcs/ft_printf_pad.c			\
		srcs/ft_printf_hexa.c

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra -I includes/

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all