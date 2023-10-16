/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbertoword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:48:46 by jbyrne            #+#    #+#             */
/*   Updated: 2023/10/15 23:37:02 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // delete

void	ft_printpart(char *stringpart, int length, char *file);
char	*ft_strncat(char *dest, char *src, int nb);
void	write_str(char *s1);
int	length(char *str);
char	*ft_strncat(char *dest, char *src, int nb);
char    *str_key(char *key, char *file);

char	*millar(int power)
{
	int	i;
	char	*size;

	i = 0;
	size = (char*)malloc((power + 2) *sizeof(char));
	if (!size)
		return (0);
	size[0] = '1';
	while(i < power)
	{
		ft_strncat(size, "0", 1);
                i++;
	}
	size[power + 1] = '\0';
	return (size);
}

void	numbertoword(char *str, char *file)
{
	int 	strlength;
	int	power;
	char	*size;
	int	i;
	int	j;
	char	part[4];
	int	len;

	strlength = length(str);
	i = 0;
	j = 1;
	len = strlength / 3;
	if (strlength % 3 != 0)
		len++;
	while (j <= len)
	{      
	       	power = (len - j) * 3;
		size = millar(power);
		if (strlength % 3 != 0 && j == 1) //if the first part is less than 3 characters
		{
			ft_strncat(part, &str[i], (strlength % 3)); //make new string part with these
	       		ft_printpart(part, (strlength % 3), file);//printthis
		}
		else //if part has three characters
		{
			ft_strncat(part, &str[i], 3);
			ft_printpart(part, 3, file);
		}
		if(j != len)
			write_str(str_key(size, file));
		if(strlength % 3 != 0)
			i+=(strlength % 3);
		else
			i+=3;
		j++;
	}
	free(size);
}
/*
int	main(void)
{
	char *s = "12345";
	numbertoword(s, "numbers.dict");
}*/
