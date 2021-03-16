/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_pointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:08:34 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/02 11:08:52 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		display_ptr(va_list arg, t_format *fmt)
{
	char			*base;
	long long		data;

	data = va_arg(arg, unsigned long);
	base = HEX_LOWER;
	if (data < 0)
        fmt->data_len = ft_nbrlen_base(-1 * data, base, fmt);
    else
		fmt->data_len = ft_nbrlen_base(data, base, fmt);
	if (fmt->minus == 0)
        print_space(fmt, data);
	if (data < 0 )
        ft_putchar('-', fmt);
	ft_putstr("0x", fmt);
	print_zero(fmt, data);
	if (data < 0)
        ft_putnbr_base(-1 * data, base, fmt);
	else
        ft_putnbr_base(data, base, fmt);
	if (fmt->minus == 1)
        print_space(fmt, data);
}