/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:43:47 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/25 17:54:09 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int unsigned    i;
    int    unsigned    u;
    u = 0;
    i = 0;

    while (src[u]) //compteur 
        u++;
    while (src[i]) // copiage 
    {
        dest[i] = src[i];
        i++;
    }
    if (u == n && n != 0)  // si longueur source et taille egale finir avec un \0 
        dest[i] = '\0';
    if (u < n)
        while (u < n)
        {
            dest[u]    = '\0';
            u++;
        }
    return (dest);
}
