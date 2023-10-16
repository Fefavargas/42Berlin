/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inner_box.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 11:28:24 by dskoryko          #+#    #+#             */
/*   Updated: 2023/10/08 22:35:40 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	int_to_char(unsigned int number)
{
	char	c;

	c = number + '0';
	return c;
}


void	print_inner_box(int **array, int size)
{
	int	i;
	int	j;
	char	c;

	i = 1;
	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			c = int_to_char(array[i][j]); 
			write(1, &c, 1);
			write(1, " ", 1);
			j++;
		}
		i ++;
		write(1, "\n", 1);
	}
}
