/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:38:28 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/03 17:48:23 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;

	cont = 0;
	while (cont < size)
	{
		ft_swap(&tab[cont], &tab[size - 1]);
		cont++;
		size--;
	}
}
/*
void	ft_print(int *tab)
{
	int	cont;

	cont = 0;
	while (tab[cont] != '\0')
	{
		printf("%d", tab[cont]);	
		cont++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_rev_int_tab(tab, 5);
	ft_print(tab);
	return (0);
}
*/
