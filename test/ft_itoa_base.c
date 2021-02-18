/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:36:59 by cregazzo          #+#    #+#             */
/*   Updated: 2021/02/18 14:59:40 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

static int	nb_char(int n, int len)
{
	int	nb;

	nb = 1;
	while (n /len != 0)
	{
		n = n / len;
		nb++;
	}
	return (nb);
}

char		*ft_itoa_base(int n, char *base)
{
	int		i;
	char	*dest;
	int		len;

	len = ft_strlen(base);
	i = nb_char(n, len);
	if (!(dest = (char*)malloc((i + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		n = -n;
		dest[0] = '-';
	}
	dest[i] = '\0';
	i--;
	while (i >=  0)
	{
		dest[i] = base[n % len];
		n = n / len;
		i--;
	}
	return (dest);
}

int main ()
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};
	char *base = "0123456789abcdef";

	while (i < 5)
		printf("%s\n", ft_itoa_base(tab[i++], base));

	return 0;
}

