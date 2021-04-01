/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:10:39 by cregazzo          #+#    #+#             */
/*   Updated: 2021/04/01 14:07:04 by cregazzo         ###   ########.fr       */
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
	fmt->data_len = ft_nbrlen_base(data, base, fmt);
	if (fmt->minus == 0)
		print_space(fmt, data);
	print_zero(fmt, data);
	ft_putnbr_base(data, base, fmt);
	if (fmt->minus == 1)
		print_space(fmt, data);
}
