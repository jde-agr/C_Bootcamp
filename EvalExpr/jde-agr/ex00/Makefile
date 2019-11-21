# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/28 09:02:15 by jde-agr           #+#    #+#              #
#    Updated: 2018/04/29 09:29:29 by jde-agr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

HEADER = headers/ft_header.h

SRCS = srcs/ft_helper.c srcs/eval_expr.c

OUTPUT = ft_helper.o eval_expr.o

FLAGS = -W -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	gcc $(OUTPUT) -o $(NAME)

clean:
	rm -f $(OUTPUT)

fclean: clean
	rm -f $(NAME)

re: fclean all
