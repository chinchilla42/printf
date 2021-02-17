/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:43:10 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/09 16:17:27 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*csrc;
	unsigned char	*cdest;

	i = 0;
	csrc = (unsigned char *)src;
	cdest = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
		while (n > 0)
		{
			cdest[n - 1] = csrc[n - 1];
			n--;
		}
	else
		while (i < n)
		{
			cdest[i] = csrc[i];
			i++;
		}
	return (dest);
}
