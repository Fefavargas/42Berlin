/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 22:27:37 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/15 22:41:37 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	write_str(char *s1);
void	numbertoword(char *str, char *file);

int	valid_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return(1);
}

int	main(int argc, char *argv[])
{
	int	valid;

	valid = 0;
	if (argc == 2)
	{
		valid = valid_num(argv[1]);
	}
	else if (argc == 3)
	{
		valid = valid_num(argv[2]);
	}
	if (!valid)
	{
		write(1, "Error\n", 5);
		return (0);
	}
	if (argc == 2)
		numbertoword(argv[1], "numbers.dict");
	if (argc == 3)
		numbertoword(argv[2], argv[1]);
	return (0);
}
