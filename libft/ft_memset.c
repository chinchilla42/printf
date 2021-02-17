/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:43:44 by cregazzo          #+#    #+#             */
/*   Updated: 2020/11/30 18:34:23 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*uc;

	i = 0;
	uc = (unsigned char*)b;
	while (i < n)
	{
		*uc = (unsigned char)c;
		uc++;
		i++;
	}
	return (b);
}
