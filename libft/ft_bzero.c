/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:38:15 by cregazzo          #+#    #+#             */
/*   Updated: 2020/11/30 17:40:05 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*uc;

	i = 0;
	uc = (unsigned char*)s;
	while (i < n)
	{
		*(uc + i) = 0;
		i++;
	}
}
