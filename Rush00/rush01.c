/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 09:37:23 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/04 10:42:10 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error_function(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write (1, "Values should be greater than 0. Try again", 42);
		return (1);
	}
	return (0);
}

void	choose_character(int x, int y, int row, int col)
{
	if (row == 0 && col == 0)
		ft_putchar('/');
	else if (row == y -1 && col == x -1 && col != 0 && row != 0)
		ft_putchar('/');
	else if ((row == 0 && col == x - 1) || (row == y - 1 && col == 0))
		ft_putchar('\\');
	else if (col == 0 || row == 0 || row == y - 1 || col == x - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	col;
	int	row;

	if (error_function(x, y))
		return ;
	row = 0;
	while (row < y)
	{
		col = 0;
		while (col < x)
		{
			choose_character(x, y, row, col);
			col ++;
		}
		ft_putchar('\n');
		row ++;
	}
}
