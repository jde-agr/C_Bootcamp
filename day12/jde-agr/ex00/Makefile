# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/26 06:40:33 by jde-agr           #+#    #+#              #
#    Updated: 2018/04/26 17:41:42 by jde-agr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRC = ft_display_file.c

OUTPUT = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -W -Wall -Werror -Wextra $(SRC) -o $(NAME) 	

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
