/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_parms.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 00:11:15 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/16 20:27:58 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = argc;
	while (j - 1 > 0)
	{
		i = 0;
		while (argv[j - 1][i])
		{
			write(1, &argv[j - 1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
