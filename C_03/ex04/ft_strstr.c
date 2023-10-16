/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 21:35:06 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 16:42:13 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = length(to_find);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (j == count)
			return (&str[i]);
		i++;
	}
	if (*to_find)
		return (0);
	return (str);
}
/*
#include <string.h>
int	main(void)
{
	char	str[100] = "";
	char	str1[100] = "";
	char	*find;
	
	find = ft_strstr(str, "123");
	printf("%s \n", find);
	printf("%s \n", strstr(str1,"123"));
	return (0);
}
*/
