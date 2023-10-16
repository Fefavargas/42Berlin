/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:25:06 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 16:42:32 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n <= nb && n <= 46340)
	{
		if (n * n == nb)
			return (n);
		n++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(-16));
}*/
