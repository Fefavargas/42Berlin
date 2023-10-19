/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:07:28 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/17 17:07:49 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	countchar(char **str, int size)
{
	int	qtd;
	int	j;

	j = 0;
	qtd = 0;
	while (j < size)
		qtd += length(str[j]);
	return (qtd);
}

void	ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
}

void	ft_cat(char **str, char *sep, int size, char *c)
{
	int	j;
	int	i;

	j = 0;
	while (j < size)
	{
		ft_strcat(c, str[j]);
		if (j != size - 1)
			ft_strcat(c, sep);
		j++;
	}
}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*c;
	int		qtd;
	int		i;
	int		lensep;

	lensep = length(sep);
	i = 0;
	if (size > 0)
	{
		while (i < size)
			qtd += length(str[i++]);
		qtd += lensep * (size - 1) + 1;
		c = (char *)malloc(qtd * sizeof(char));
		if (!c)
		{
			c = NULL;
			return (c);
		}
		ft_cat(str, sep, size, c);
	}
	else
		c = NULL;
	return (c);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*str[4];
	char	*sep = "..";
	char	*c;

	str[0] = "Hellow";
	str[1] = "world";
	str[2] = "better";
	str[3] = "42";
	c = ft_strjoin(4, str, sep);
	printf("%s\n", c);
	free(c);
}*/
