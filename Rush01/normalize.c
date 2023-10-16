/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fihristo <fihristo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 10:58:21 by fihristo          #+#    #+#             */
/*   Updated: 2023/10/08 23:39:10 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
// Function to count the number of arguments and validate their format
int	count_args(char *argv)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (argv[i]) 
	{
		if (argv[i] > '0' && argv[i] < '9')
			n++;
		else if (argv[i] != ' ')
			return (-1);
		i++;
	}
	return (n);
}

int	**empty_grid(int size)
{
	int	**grid;
	int	i;
	int	j;

	i = 0;
	grid = malloc(sizeof (int *) * (size + 2));
	while (i < size + 2)
	{
		j = 0;
		grid[i] = malloc(sizeof (int *) * (size + 2));
		while (j < (size + 2))
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	change_value(int **tab, int i, int j, int n)
{
	tab[i][j] = n - '0';
}

// Function to extract and store the arguments in a 2D array
int	**get_args(char **argv, int size)
{
	int	i;
	int	j;
	int	k;
	int	**tab;

	i = 1;
	j = 1;
	k = 0;
	tab = empty_grid(size);
	while (k < (size * size * 2) - 1 && argv[1][k] != '\0')
	{
		if (k / 2 >= 0 && k / 2 < size)
		{
			change_value(tab, 0, j++, argv[1][k]);
			if (j == 5)
				j = 1;
		}
		else if (k / 2 >= size && k / 2 < (size * 2))
			change_value(tab, size + 1, j++, argv[1][k]);
		else if (k / 2 >= size * 2 && k / 2 < (size * 3))
		{
			change_value(tab, i++, 0, argv[1][k]);
			if (i == 5)
				i = 1;
		}
		else
			change_value(tab, i++, size + 1, argv[1][k]);
		k += 2;
	}
	return (tab);
}

// Main function to validate and retrieve arguments
int	**args(int argc, char **argv, int *size)
{
	int	**args;
	int	num;

	if (argc != 2)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	num = count_args(argv[1]);
	if (num % 4 != 0)
	{
		write(1, "Error\n", 6);
		return (NULL);
	}
	*size = num / 4;
	args = get_args(argv, *size);
	return (args);
}
