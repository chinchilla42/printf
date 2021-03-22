e* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:07:28 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/22 09:48:45 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, t_format *fmt)
{
	write(1, &c, 1);
	fmt->count++;
}

void	ft_putstr(char *s, t_format *fmt)
{
	int	i;

	if (!s || (fmt->type == 's' && fmt->dot && !fmt->prec))
		return ;
	i = 0;
	if (fmt->type == 's' && fmt->prec)
		while (s[i] && i < fmt->prec)
			ft_putchar(s[i++], fmt);
	else
		while (s[i])
			ft_putchar(s[i++], fmt);
}

void	ft_putnbr_base(unsigned long n, char *base, t_format *fmt)
{
	unsigned long	print;

	if (n == 0 && fmt->dot && !fmt->prec)
		return ;
	print = ft_strlen(base, fmt);
	if (n >= print)
		ft_putnbr_base((n / print), base, fmt);
	ft_putchar(base[n % print], fmt);
}

int		ft_strlen(char *str, t_format *fmt)
{
	int	i;

	if (str == NULL || (fmt->type == 's' && fmt->dot && !fmt->prec))
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_nbrlen_base(unsigned long n, char *base, t_format *fmt)
{
	int				i;
	unsigned long	print;

	if (n == 0 && fmt->dot && !fmt->prec)
		return (0);
	print = ft_strlen(base, fmt);
	i = 1;
	while (n >= print)
	{
		n /= print;
		i++;
	}
	return (i);
}
