/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 13:04:39 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/21 13:18:48 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
