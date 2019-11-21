# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/26 18:06:14 by jde-agr           #+#    #+#              #
#    Updated: 2018/04/26 18:12:58 by jde-agr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = ft_cat.c

OUTPUT = ft_cat.o

all: $(NAME)

$(NAME):
	gcc -W -Wall -Werror -Wextra $(SRC) -o $(NAME)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
