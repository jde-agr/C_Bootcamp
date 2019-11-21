# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/29 14:20:04 by jde-agr           #+#    #+#              #
#    Updated: 2018/04/29 17:23:18 by jde-agr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

FLAGS = -W -Wall -Werror -Wextra

SRCS = srcs/main.c srcs/ft_functions.c srcs/ft_idrush.c srcs/ft_inputcheck.c

HEADERS = headers/ft_rush.h

OBJS = main.o ft_functions.o ft_idrush.o ft_inputcheck.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -c
	gcc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
