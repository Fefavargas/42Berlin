/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:22:24 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/03 13:18:30 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0' )
		cont ++;
	return (cont++);
}
/*
#include <unistd.h>
int	main(void)
{
	int	lenght;
	char	str[13]= "Hello world!";

	lenght = ft_strlen(str);
	printf("%d", lenght);
	return (0);
}
*/
