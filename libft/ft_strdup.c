/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:45:44 by cregazzo          #+#    #+#             */
/*   Updated: 2020/11/30 15:45:47 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*dest;
	int		taille;
	int		i;

	taille = 0;
	i = 0;
	while (str1[taille])
		taille++;
	if (!(dest = malloc(sizeof(char) * (taille + 1))))
		return (NULL);
	while (i < taille)
	{
		dest[i] = str1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
