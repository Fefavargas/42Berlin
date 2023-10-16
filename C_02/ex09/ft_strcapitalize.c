/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 23:46:12 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/10 23:50:25 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	lowercase_all(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += 32;
		str++;
	}
}

int	is_abc(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	if (a >= 'A' && a <= 'Z')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] == '\0')
		return (str);
	lowercase_all(str);
	while (str[i] != '\0')
	{
		if (is_abc(str[i]) && !(is_num(str[i - 1]) || is_abc(str[i - 1])))
			str[i] -= 32;
		i++;
	}
	if (*str >= 'a' && *str <= 'z')
		str[0] -= 32;
	return (str);
}
