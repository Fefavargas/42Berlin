/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpart.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbyrne <jbyrne@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:27:14 by jbyrne            #+#    #+#             */
/*   Updated: 2023/10/15 23:35:38 by fvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    write_str(char *s1);
char    *ft_strncat(char *dest, char *src, int nb);
char	*str_key(char *key, char *file);
 //stringpart refers to each set of 3 characters,
 //ft_printpart looks at the individual characters and determine what to print for each part (hundred,ten,digit)
        
void    ft_printpart(char *stringpart, int length,char *file)
{
        int	i;
        char	*firstnum;
	char	*ten;
	char	*hundred;
        char	*digit;
	char	dec[3];
	char	temp[3];

	i = length;
        while (i > 0)
        {
                if ((i == 3) && (stringpart[length - i] != '0'))
		{
			temp[0] = stringpart[length - i]; 
			firstnum = str_key(temp, file);
		       	hundred = str_key("100", file);
			write_str(firstnum);
			write_str(" ");
			write_str(hundred);
		}
                if ((i == 2) && (stringpart[length - i] != '0'))
		{
		       	if (stringpart[length - i] >= '2')
			{
				ft_strncat(dec, &stringpart[length-i], 1);
				ft_strncat(dec, "0", 1);
                        	ten = str_key(dec, file);
				write_str(ten);
			}
			if (stringpart[length -i] == '1')
			{	
				ft_strncat(dec, &stringpart[length-i], 2);
                                ten = str_key(dec, file);
				write_str(ten);
				i = 0;
			}
		}
		if ((i == 1) && (stringpart[length-i] != '0'))
		{
			digit = str_key(&stringpart[length-i], file);
			write_str(digit);
		}
		if (stringpart[length - i + 1] && stringpart[length - i + 1] != '0')
                                        write_str(" ");
		i--;
	}
}
/*
int	main(void)
{
	char	*s = "917";
	ft_printpart(s,3, "numbers.dict");
}*/
