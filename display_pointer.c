/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:08:34 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/19 14:14:41 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		display_ptr(va_list arg, t_format *fmt)
{
	char			*base;
	unsigned long			data;

	data = va_arg(arg, unsigned long);
	base = HEX_LOWER;
	fmt->data_len = ft_nbrlen_base(data, base, fmt);
	if (fmt->minus == 0)
		print_space(fmt, data);
	ft_putstr("0x", fmt);
	ft_putnbr_base(data, base, fmt);
	if (fmt->minus == 1)
		print_space(fmt, data);
}
