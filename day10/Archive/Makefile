# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jburger <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/22 23:02:51 by jburger           #+#    #+#              #
#    Updated: 2018/04/24 09:13:18 by jburger          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/ft.c srcs/ft_atoi.c srcs/main.c srcs/operator.c

HEADER = includes/

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRCS) -I $(HEADER)

clean:
	/bin/rm -f $(NAME)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
