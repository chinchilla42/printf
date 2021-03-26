/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_percent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:06:57 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/25 16:02:18 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_pc(va_list arg, t_format *fmt)
{
	int pc;

	(void)arg;
	pc = '%';
	fmt->data_len = 1;
	if (fmt->data_len < fmt->prec)
		fmt->zero_len = fmt->width - fmt->prec;
	else
		fmt->zero_len = fmt->width - fmt->data_len;
	if (fmt->zero && !fmt->dot && !fmt->prec)
	{	
		fmt->zero_len = fmt->width - fmt->space_len;
		fmt->space_len = fmt->width - fmt->data_len  - fmt->zero_len;
	}
	else
	{
		fmt->zero_len = fmt->prec - fmt->data_len;
		fmt->space_len = fmt->prec - fmt->data_len - fmt->zero_len;	
	}
	if (fmt->minus == 0)
		print_space_pc(fmt);
	print_zero_pc(fmt);
	ft_putchar(pc, fmt);
	if (fmt->minus == 1)
		print_space_pc(fmt);
}


void	print_space_pc(t_format *fmt)
{
	while (fmt->space_len-- > 0)
		ft_putchar(' ', fmt);
}

void	print_zero_pc(t_format *fmt)
{
	while (fmt->zero_len-- > 0)
		ft_putchar('0', fmt);
}
