/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 19:20:44 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 22:23:10 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

unsigned int	length(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;
	unsigned int	len;
	unsigned int	lsrc;

	j = length(dest);
	lsrc = length(src);
	len = j;
	k = 0;
	while (src[k] != '\0' && k <= size - len - 1)
	{
		dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	if (size < len)
		return (size + src);
	return (lsrc + len);
}
/*
int	main(void)
{
	char	dest[9] = "Hello,";
	char	*src = "world!";
	unsigned int	size = ft_strlcat(dest, src, 9);

	printf("%s \n", dest);
	printf("%d \n", size);
	return (0);
}
*/
