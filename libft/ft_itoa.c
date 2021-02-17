/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <cregazzo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 15:41:48 by cregazzo          #+#    #+#             */
/*   Updated: 2020/12/10 13:03:30 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		i;
	char	*dest;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_len(n);
	if (!(dest = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
	}
	dest[i] = '\0';
	i--;
	while (n > 0)
	{
		dest[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (dest);
}
