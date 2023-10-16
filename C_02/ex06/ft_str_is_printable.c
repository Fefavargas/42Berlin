/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 21:27:56 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/04 19:39:28 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < ' ')
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
	result = ft_str_is_lowercase(" ");
        printf("%d \n", result);
	result = ft_str_is_lowercase("ABC!");
        printf("%d \n", result);
	result = ft_str_is_lowercase("ASJFJ0");
        printf("%d \n", result);

}
*/
