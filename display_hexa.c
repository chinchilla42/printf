/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:10:39 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/22 14:23:34 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_hexa(va_list arg, t_format *fmt)
{
	char			*base;
	long long		data;

	data = va_arg(arg, unsigned int);
	if (fmt->type == 'X')
		base = HEX_UPPER;
	else
		base = HEX_LOWER;
	if (data < 0)
		fmt->data_len = ft_nbrlen_base(-1 * data, base, fmt);
	else
		fmt->data_len = ft_nbrlen_base(data, base, fmt);
	if (fmt->dash == 1)
		fmt->data_len += 2;
	if (fmt->minus == 0)
		print_space(fmt, data);
	if (data > 0)
			print_dash(fmt);
	print_zero(fmt, data);
	ft_putnbr_base(data, base, fmt);
	if (fmt->minus == 1)
		print_space(fmt, data);
}

void	print_dash(t_format *fmt)
{
	if (fmt->dash == 1)
	{
		if (fmt->type == 'x')
			ft_putstr("0x", fmt);
		if (fmt->type == 'X')
			(ft_putstr("0X", fmt));
	}
}
