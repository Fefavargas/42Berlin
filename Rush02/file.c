/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvargas <fvargas@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:48:00 by fvargas           #+#    #+#             */
/*   Updated: 2023/10/15 19:17:59 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	length(char *str);
int	ft_strcmp(char *s1, char *s2);

int	ft_open(char *file)
{
	int	fp;

	fp = open(file, O_RDONLY);
	if (fp == -1)
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (fp);
}

int	ft_close(int fp)
{
	if (close(fp))
	{
		write(1, "Dict Error\n", 11);
		return (-1);
	}
	return (0);
}

//return linha of the key;
int	lookforstr(char *key, char *file)
{
	int		fp;
	int		qtd;
	int		lenkey;
	char	stop[1];
	char	*c;
	int		flag;

	flag = 1;
	qtd = 1;
	stop[0] = '\n';
	fp = ft_open(file);
	if (fp == -1)
		return (-1);
	lenkey = length(key);
	c = (char *) malloc((lenkey) * sizeof(char));
	if (!c)
		return (-1);
	while (flag && stop[0] != EOF)
	{
		read(fp, stop, 1);
		if (stop[0] == '\n')
		{
			read(fp, c, lenkey);
			qtd++;
		}
		if (ft_strcmp(c, key) == 0)
			flag = 0;
	}
	free(c);
	if (flag == 1)
		return (-1);
	if (ft_close(fp))
		return (-1);
	return (qtd);
}

//return the lenght of the line of key
int	keylength(int line, char *file)
{
	int		fp;
	int		cline;
	int		cchar;
	char	c[1];

	cline = 1;
	cchar = 0;
	c[0] = '\n';
	fp = ft_open(file);
	while (cline <= line)
	{
		read(fp, c, 1);
		if (c[0] == '\n')
			cline++;
		if (cline == line)
		{
			read(fp, c, 1);
			while (c[0] != '\n')
			{
				read(fp, c, 1);
				cchar++;
			}
			cline++;
		}
	}
	ft_close(fp);
	return (cchar);
}

//return the whole line of key
char	*str_line(char *key, char *file)
{
	int		line;
	int		cchar;
	char	*str;
	char	c[1];
	int		i;
	int		cline;
	int		fp;

	i = 0;
	cline = 1;
	line = lookforstr(key, file);
	cchar = keylength(line, file);
	str = (char *)malloc((cchar + 1) * sizeof(char));
	if (!str)
		return (0);
	fp = ft_open(file);
	while (cline < line)
	{
		read(fp, c, 1);
		if (c[0] == '\n')
			cline++;
		if (cline == line)
		{
			read(fp, c, 1);
			while (c[0] != '\n')
			{
				str[i++] = c[0];
				read(fp, c, 1);
			}
			cline++;
		}
	}
	str[i] = '\0';
	ft_close(fp);
	return (str);
}

//return the translation of the number
char	*str_key(char *key, char *file)
{
	char	*str;
	int		len;

	str = str_line(key, file);
	len = length(key);
	str = &str[len + 2];
	return (str);
}
/*
int	main(void)
{
	printf("%d \n",	lookforstr("100", "numbers.dict"));
	printf("%d \n", keylength(29,"numbers.dict"));
	printf("%s \n", str_line("100", "numbers.dict"));
	printf("%s \n", str_key("100", "numbers.dict"));
}*/
