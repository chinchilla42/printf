/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:07:58 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/24 14:45:57 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		display_di(va_list arg, t_format *fmt)
{
	char			*base;
	long long		data;

	data = va_arg(arg, int);
	base = DEC;
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

void		display_u(va_list arg, t_format *fmt)
{
	char			*base;
	long long		data;

	data = va_arg(arg, unsigned int);
	base = DEC;
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
