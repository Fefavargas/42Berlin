/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:57:36 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 01:04:08 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	size = max - min;
	if (size <= 0)
	{
		array = NULL;
		return (array);
	}
	array = (int *)malloc(size * sizeof(int));
	if (!array)
		return (0);
	i = min;
	while (i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
