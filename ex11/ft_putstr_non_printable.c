/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 14:44:05 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/20 12:24:24 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hexa(char tabl)
{
	char	a;
	char	b;
	char	*e;
	int		c;
	int		d;

	e = "0123456789abcdef";
	a = tabl / 16;
	b = tabl % 16;
	c = a;
	d = b;
	write(1, "//", 1);
	write(1, &e[c], 1);
	write(1, &e[d], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0) && (str[i] <= 31 || str[i] == 127))
			ft_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
