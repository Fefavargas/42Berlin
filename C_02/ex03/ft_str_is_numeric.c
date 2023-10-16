/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:38:10 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/04 19:22:59 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	result = ft_str_is_numeric("012364");
	printf("%i \n", result);
	result = ft_str_is_numeric("aksfns");
        printf("%i \n", result);
	result = ft_str_is_numeric("as*dgc");
        printf("%i \n", result);
	result = ft_str_is_numeric("56214.");
        printf("%i \n", result);
	return (0);
}
*/
