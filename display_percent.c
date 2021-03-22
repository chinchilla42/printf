/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:06:57 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/22 09:41:19 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_pc(t_format *fmt)
{
	int pc;

	pc = '%';
	fmt->data_len = 1;
	if (fmt->minus == 0)
		print_space(fmt, 0);
	print_zero(fmt, 0);
	ft_putchar(pc, fmt);
	if (fmt->minus == 1)
		print_space(fmt, 0);
}
