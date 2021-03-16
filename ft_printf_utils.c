/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:07:28 by cregazzo          #+#    #+#             */
/*   Updated: 2021/02/17 16:07:35 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putchar_pf(char c, t_data *data)
{
	write(1, &c, 1);
	data->count++;
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nb;
	long	diviseur;

	nb = (long)nbr;
	diviseur = 0;
	if (nb < 0)
		{
			nb = nb * -1;
			ft_putchar('-');
		}
		while (base[diviseur])
			diviseur++;
		if (nb < diviseur)
			ft_putchar(base[nb]);
		if (nb >= diviseur)
		{
			ft_putnbr_base(nb / diviseur, base);
			ft_putchar(base[nb % diviseur]);
		}
	}

static int	nb_char(long n, int len)
{
	long nb;

	nb = 1;
	while (n /len != 0)
	{
		n = n / len;
		nb++;
	}
	return (nb);
}

char		*ft_itoa_base(long n, char *base)
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