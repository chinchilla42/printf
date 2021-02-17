/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:47:56 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/10 12:35:05 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	len_to_copy;

	i = 0;
	sub = NULL;
	if (s)
	{
		if (start + len <= ft_strlen(s))
			len_to_copy = len;
		else
			len_to_copy = 0;
		if (!(sub = (char *)malloc(sizeof(char) * len_to_copy + 1)))
			return (NULL);
		while (i < len_to_copy)
		{
			sub[i] = s[i + start];
			i++;
		}
		sub[i] = '\0';
	}
	return (sub);
}
