/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 01:28:48 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 23:45:56 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	n = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (n < nb && n <= 2147483647)
		if (nb % n++ == 0)
			return (0);
	return (1);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_is_prime(-1));
	printf("%d", ft_is_prime(1));
	printf("%d", ft_is_prime(2));
	printf("%d", ft_is_prime(3));
	printf("%d", ft_is_prime(4));
	printf("%d", ft_is_prime(5));
	printf("%d", ft_is_prime(6));
	printf("%d", ft_is_prime(7));
	printf("%d", ft_is_prime(2147483647));
	printf("%d", ft_is_prime(-21));
	return (0);
}
*/
