/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 16:10:13 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/06 11:41:35 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);

int	lenght(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	power(int n)
{
	int	i;
	int	num;

	i = 1;
	num = 1;
	while(i < n)
	{
		num *= 10;
		i++;
	}
	return (num);
}

int	conv_int(char *str)
{
	int	len;
	int	i;
	int	num;
	int	size;

	i = 0;
	num = 0;
	len = lenght(str);
	while (i < len)
	{
		size = power(len - i); 
		num += (str[i] - '0') * size;
		i++;
	}
	return (num);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = conv_int(argv[1]);
	j = conv_int(argv[2]);
	rush(i, j);
	//printf (" %d ", i);
	return (0);
}
