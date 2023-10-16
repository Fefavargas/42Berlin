/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 17:32:30 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/13 13:00:24 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
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
		if (str[i] == '+' || str[i] == '-')
			return (-1);
		i++;
	}
	return (len);
}

int	count(int nbr, int len)
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
			nlen *= len ;
			j++;
		}
		n += nlen;
		i++;
	}
	return (i);
}

void	write_str(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	int		i;
	int		j;
	char	s[32];

	len = check_base(base);
	j = 1;
	if (len == -1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	i = count(nbr, len);
	while (j <= i)
	{
		s[i - j] = base[nbr % len];
		nbr = nbr / len;
		j++;
	}
	s[i] = '\0';
	write_str(s);
}

int	main(void)
{
	char	base[100] = "0123456789";

	ft_putnbr_base(2147483647 ,base);	
	return (0);
}

