/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:10:39 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/17 15:14:18 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		display_hexa(va_list arg, t_format *fmt)
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
	if (fmt->minus == 0)
		print_space(fmt, data);
	if (data < 0)
		ft_putchar('-', fmt);
	print_zero(fmt, data);
	if (data < 0)
		ft_putnbr_base(-1 * data, base, fmt);
	else
		ft_putnbr_base(data, base, fmt);
	if (fmt->minus == 1)
		print_space(fmt, data);
}
