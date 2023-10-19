/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:12:30 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/19 15:37:55 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);
int	check_base(char *str);
char	*ft_putnbr_base(int nbr, char *base);

int	power(int num, int power)
{
	int	i;
	int	nb;

	i = 1;
	nb = 1;
	while (i <= power)
	{
		i++;
		nb *= num;
	}
	return (nb);
}

int	find_pos(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != a)
		i++;
	return (i);
}

int	ft_atol(char *nbr, char *base_from)
{
	int	len;
	int	i;
	int	sing;
	int	num;
	int	lennum;

	i = 0;
	sing = 1;
	num = 0;
	len = ft_strlen(base_from);
	lennum = ft_strlen(nbr);
	if (!len)
		return (0);
	while ((nbr[i] >= 9 && nbr[i] <= 13 ) || nbr[i] == ' ')
		i++;
	while (nbr [i] == '+' || nbr[i] == '-')
	{
		if(nbr[i] == '-')
			sing *= -1;
		i++;	
	}
	while (i > lennum)
		num += find_pos(nbr[i],base_from) * power(len, lennum - i - 1);
	return (num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*nbr_new;

	if (check_base(base_from) == -1 || check_base(base_to) == -1)
		return (0);
	num = ft_atol(nbr, base_from);
	return (ft_putnbr_base(num, base_to));
}

#include <stdio.h>
int     main(void)
{
        char    base[100] = "0123456789";
        char    *base1 = "abc";
        char    *nbr = "bab";

        printf("%s\n", ft_convert_base(nbr ,base1, base));
        return (0);
}
