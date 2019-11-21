#!/bin/sh
gcc -c ft_fill_input.c ft_fill_sudoku.c ft_is_available.c
ar rc libft.a ft_fill_input.o ft_fill_sudoku.o ft_is_available.o
