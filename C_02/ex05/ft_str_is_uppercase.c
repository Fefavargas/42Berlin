/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:27:56 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/04 19:38:39 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int	result;

	result = ft_str_is_lowercase("abcd");
	printf("%d \n", result);
	result = ft_str_is_lowerca:se("ABCD");
        printf("%d \n", result);
	result = ft_str_is_lowercase("ABC!");
        printf("%d \n", result);
	result = ft_str_is_lowercase("ASJFJ0");
        printf("%d \n", result);

}
*/
