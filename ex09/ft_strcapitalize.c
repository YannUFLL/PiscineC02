/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:04:39 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/21 13:14:46 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 97) && (str[i] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		while ((str[i] != 32) && (str[i] != 0) && (str[i] != 59)) 
		{
			if ((str[i] == 43) || (str[i] == 45) || (str[i] <= 31))
				break ;
			if (str[i] == 127)
				break ;
			else if ((str[i + 1] >= 65) && (str[i + 1] <= 90))
				str[i + 1] = str[i + 1] + 32;
			i++;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hELlo";
	char	str3[] = "42helLO";
	char	str4[] = "hELlo;woRLd";
	char	str5[] = "\t$t@^/3{DF";
	char	str6[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str7[] = "";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);
	ft_strcapitalize(str5);
	ft_strcapitalize(str6);
	ft_strcapitalize(str7);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	printf("%s\n", str5);
	printf("%s\n", str6);
	printf("%s\n", str7);
}


