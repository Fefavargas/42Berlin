/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:29:44 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 17:53:54 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return (*s1 - *s2);
}
/*
int	main(void)
{
	int	result;

	result = ft_strncmp("abc", "abtes", 2);
	printf("%i \n", result);
	result = ft_strncmp("abc", "ab", 3);
        printf("%i \n", result);
	result = ft_strncmp("abc", "ab", 2);
        printf("%i \n", result);
	result = ft_strncmp("p", "P", 1);
        printf("%i \n", result);
	result = ft_strncmp("ab", "ac", 2);
        printf("%i \n", result);
	printf("___\n");
	result = strncmp("abc", "abtes", 2);
        printf("%i \n", result);
        result = strncmp("abc", "ab", 3);
        printf("%i \n", result);
        result = strncmp("abc", "ab", 2);
        printf("%i \n", result);
        result = strncmp("p", "P", 1);
        printf("%i \n", result);
        result = strncmp("ab", "ac", 2);
        printf("%i \n", result);

	return (0);
}*/
