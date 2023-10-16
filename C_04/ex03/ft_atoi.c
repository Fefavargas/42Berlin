/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 16:34:28 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 17:02:46 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(char *str)
{
	int	i;
	int	n;

	n = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sig;
	int	n;

	if (!str[0])
		return (0);
	i = 0;
	sig = 1;
	while ((str[i] >= 9 && str[i] <= 13 && str[i]) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i++] == '-')
			sig *= (-1);
	}
	n = atoi(&str[i]) * sig;
	return (n);
}
/*
#include <stdio.h>
int	main()
{
	char	str[100] = "\t14";
	printf("%d", ft_atoi(str));
	return (0);
}
*/
