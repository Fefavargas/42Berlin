/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:07:28 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 19:33:52 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strlib.h>

int	length(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

int	countchar(char **str, int size)
{
	int	i;
	int	j;
	int	qtd;

	qtd = 0;
	j = 0;
	while (j < size)

}

char	*ft_strjoin(int size, char **str, char *sep)
{
	char	*c;
	int	qtd;
	int	i;

	qtd = 0;
	lensep = length(sep);
	if (size != 0)
	{
		while()
		c = (char *)malloc(size * sizeof(char))
	}
	else
		c = NULL;
	return (c);
}
