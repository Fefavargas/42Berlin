/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:10:26 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/12 19:13:42 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	int	result;

	result = ft_strcmp("Hello!","Hello!");
	printf("%i \n", result);
	result = ft_strcmp("ABC","AB");
        printf("%i \n", result);
        result = ft_strcmp("ABA","ABZ");
        printf("%i \n", result);
        result = ft_strcmp("ABJ","ABC");
        printf("%i \n", result);
        result = ft_strcmp("'\201'","A");
        printf("%i \n", result);
	result = strcmp("Hello!","Hello!");
 	printf("%i \n", result);
 	result = strcmp("ABC","AB");
 	printf("%i \n", result);
 	result = strcmp("ABA","ABZ");
 	printf("%i \n", result);
 	result = strcmp("ABJ","ABC");
 	printf("%i \n", result);
 	result = strcmp("'\201'","A");
 	printf("%i \n", result);
}
*/
