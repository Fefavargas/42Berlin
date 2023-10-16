/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:37:05 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/09 16:57:28 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_col_up(int **grid, int j, int size)
{
	int	max;
	int	count;
	int	c;

	max = grid[size][j];
	count = 1;
	c = size - 1;
	while (c >= 1)
	{
		if (grid[c][j] > max)
		{
			max = grid[c][j];
			count++;
		}
		c--;
	}
	if (count == grid[size + 1][j])
		return (1);
	return (0);
}

int	check_col_down(int **grid, int j, int size)
{
	int	max;
	int	count;
	int	c;

	max = grid[1][j];
	count = 1;
	c = 2;
	while (c <= size)
	{
		if (grid[c][j] > max)
		{
			max = grid[c][j];
			count++;
		}
		c++;
	}
	if (count == grid[0][j])
		return (1);
	return (0);
}

int	check_row_left(int **grid, int i, int size)
{
	int	max;
	int	count;
	int	c;

	max = grid[i][size];
	count = 1;
	c = size - 1;
	while (c >= 1)
	{
		if (grid[i][c] > max)
		{
			max = grid[i][c];
			count++;
		}
		c--;
	}
	if (count == grid[i][size + 1])
		return (1);
	return (0);
}

int	check_row_right(int **grid, int i, int size)
{
	int	max;
	int	count;
	int	c;

	max = grid[i][1];
	count = 1;
	c = 2;
	while (c <= size)
	{
		if (grid[i][c] > max)
		{
			max = grid[i][c];
			count++;
		}
		c++;
	}
	if (count == grid[i][0])
		return (1);
	return (0);
}

int	check_available(int **grid, int pos, int n, int size)
{
	int r;

	r = 1;
	if (pos / (size + 2) < 1 || pos / (size + 2) > size)
		return (0);
	if (pos % (size + 2) < 1 || pos % (size + 2) > size)
		return (0);
	while (r <= size)
	{
		if (grid[r][pos % (size + 2)] == n)
			return (0);
		r++;
	}
	r = 1;
	while (r <= size)
	{
		if (grid[pos / (size +2)][r] == n)
			return (0);
		r++;
	}
	return (1);
}

int	check_case(int **grid, int pos, int size)
{
	int	i;
	int	j;

	i = pos / (size + 2);
	j = pos % (size + 2);
	if (check_available(grid, pos, 0, size) == 0)
		return (1);
	if (check_row_left(grid, i, size) == 0)
		return (0);
	if (check_row_right(grid, i, size) == 0)
		return (0);
	if (check_col_down(grid, j, size) == 0)
		return (0);
	if (check_col_up(grid, j, size) == 0)
		return (0);
	return (1);
}

int	solve(int **grid, int pos, int size)
{
	int	n;
	int	i;
	int	j;

	n = 1;
	i = pos / (size + 2);
	j = pos % (size + 2);
	if (pos == (size + 2) * (size + 2) - 1)
		return (1);
	while (n <= size)
	{
		if (check_available(grid, pos, n, size) == 1)
		{
			grid[i][j] = n;
			if (check_case(grid, pos, size) == 1)
			{
				if (pos % (size + 2) == size)
				{
					if (solve(grid, pos + 3, size) == 1)
						return (1);
				}
				else 
				{
					if (solve(grid, pos + 1, size) == 1)
						return (1);
				}
			}
			else
				grid[i][j] = 0;
		}
		n++;
	}
	return (0);
}
