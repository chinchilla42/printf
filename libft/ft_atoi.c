/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:37:56 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/10 14:06:24 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			signe;
	long int	resultat;

	i = 0;
	signe = 1;
	resultat = 0;
	while (((nptr[i] >= 9) && (nptr[i] <= 13)) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= '0' && nptr[i] <= '9')
	{
		resultat = resultat * 10 + (nptr[i] - '0');
		i++;
	}
	return (resultat * signe);
}
