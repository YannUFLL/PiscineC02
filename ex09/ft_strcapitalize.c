/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:04:39 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/20 22:21:40 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_cara(char *str, int i)
{
	int	u;

	u = i;
	while ((str[u] != 32) && (str[u] != 0))
	{
		if ((str[u] == 43) || (str[u] == 45))
			break ;
		else if ((str[u + 1] >= 65) && (str[u + 1] <= 90))
			str[u + 1] = str[u + 1] + 32;
		u++;
	}
	return (u);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 1;
	while (str[i] != '\0')
	{
		while (str[i] == 32)
			i++;
		if (((str[i] >= 97) && (str[i] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		i = ft_cara(str, i) + i;
		i++;
	}
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hELlo";
	char	str3[] = "42helLO";
	char	str4[] = "hELlo;woRLd";
	char	str5[] = "\t$t@^/3{DF";
	char	str6[] = "ReKt17+LOl MdR Mdr 4242l42";
	char	str7[] = "";

	ft_strcapitalize(str1);
	ft_strcapitalize(str2);
	ft_strcapitalize(str3);
	ft_strcapitalize(str4);
	ft_strcapitalize(str5);
	ft_strcapitalize(str6);
	ft_strcapitalize(str7);

	printf("%s", str1);
	printf("%s", str2);
	printf("%s", str3);
	printf("%s", str4);
	printf("%s", str5);
	printf("%s", str6);
	printf("%s", str7);
}
