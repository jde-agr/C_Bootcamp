/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_square.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 13:31:27 by jde-agr           #+#    #+#             */
/*   Updated: 2018/05/02 16:56:10 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLVE_SQUARE_H
# define FT_SOLVE_SQUARE_H

int		g_x;
int		g_y;

int		find_min(int **puzzle, int row, int col);
int		find_max(int **puzzle, int rows, int cols);
void	solve_sq(int **puzzle, int rows, int cols);
void	assign_square(int **puzzle, int max);
void	print_sol(char **sq, int **puzzle);

#endif
