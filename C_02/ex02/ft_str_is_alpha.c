/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:46:41 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/04 18:26:45 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
			str++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	result = ft_str_is_alpha("hello");
	printf("%i \n", result);
	result = ft_str_is_alpha("Hello");
	printf("%i \n", result);
	result = ft_str_is_alpha("Hello!");
	printf("%i \n", result);
	result = ft_str_is_alpha("Hell0");
	printf("%i \n", result);
	return (0);
}
*/
