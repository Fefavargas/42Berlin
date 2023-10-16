/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 01:05:32 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 01:28:39 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc((max - min) * sizeof (int));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	*range = array;
	return (i + 1);
}
