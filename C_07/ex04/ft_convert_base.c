/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:32:30 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/19 16:12:59 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(str);
	if (len < 2)
		return (-1);
	while (str[i])
	{
		j = i;
		while (str[j])
		{
			if (str[i] == str[j] && i != j)
				return (-1);
			j++;
		}
		if (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			return (-1);
		i++;
	}
	return (len);
}

int	count(int nbr, int lenbase)
{
	int	n;
	int	nlen;
	int	i;
	int	j;

	i = 0;
	n = 0;
	while (n <= nbr && i < 32)
	{
		j = 0;
		nlen = 1;
		while (j < i)
		{
			nlen *= lenbase ;
			j++;
		}
		n += nlen;
		i++;
	}
	return (i);
}

void	write_str(char *s)
{
	while (*s)
		write(1, s++, 1);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		i;
	int		j;
	char	*s;

	j = 1;
	len = ft_strlen(base);
	i = count(nbr, len);
	s = (char *)malloc((i + 1) * sizeof(char));
	if (nbr < 0)
		nbr *= -1;
	while (j <= i)
	{
		s[i - j] = base[nbr % len];
		nbr = nbr / len;
		j++;
	}
	s[i] = '\0';
	return (s);
}
