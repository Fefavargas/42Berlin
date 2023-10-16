/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:08:07 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/08 20:44:42 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	**args(int argc, char **argv, int *size);
void	print_inner_box(int **array, int size);
void	solve(int **grid,int pos, int size);

int	main(int argc, char **argv)
{
	int	**grid;
	int	size;

	grid = args(argc, argv, &size);
	solve(grid, size + 3, size);
	print_inner_box(grid, size);
	return (0);
}
