/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:38:18 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 17:33:31 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	simple_case(int nb)
{
	if (nb % 2 == 0)
		return (0);
	if (nb % 3 == 0)
		return (0);
	if (nb % 5 == 0)
		return (0);
	if (nb % 7 == 0)
		return (0);
	if (nb % 11 == 0)
		return (0);
	return (1);
}

int	ft_is_prime(int nb)
{
	int	n;

	if (simple_case(nb) == 0)
		return (0);
	n = 13;
	while (n < nb / 2)
		if (nb % n++ == 0)
			return (0);
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	res;

	if (nb <= 2)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (nb < 2147483647)
	{
		res = ft_is_prime(nb);
		if (res != 0)
			return (nb);
		nb += 2;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(-1452));
	return (0);
}*/
