/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:42:01 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/05 15:48:23 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (csrc[i] == (unsigned char)c)
			return (&cdest[i + 1]);
		i++;
	}
	return (NULL);
}
