/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:22 by cregazzo          #+#    #+#             */
/*   Updated: 2021/04/01 14:06:38 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_c(va_list arg, t_format *fmt)
{
	int	c;

	c = va_arg(arg, int);
	fmt->data_len = 1;
	if (fmt->minus == 0)
		print_space(fmt, 0);
	ft_putchar(c, fmt);
	if (fmt->minus == 1)
		print_space(fmt, 0);
}
