# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/01 14:48:14 by jde-agr           #+#    #+#              #
#    Updated: 2018/05/02 08:51:33 by jde-agr          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

FLAGS = -W -Wall -Werror -Wextra

SRCS = srcs/*.c

HEADERS = headers/*.h

OBJS = *.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS) -c
	gcc $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
