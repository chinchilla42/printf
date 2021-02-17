/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:42:17 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/08 17:08:28 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cc;
	size_t			i;

	cc = (unsigned char *)s;
	i = 0;
	while (i < n && cc[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)&cc[i]);
}
