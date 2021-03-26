/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:03:34 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/25 16:02:23 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	get_arg(va_list arg, t_format *fmt)
{
	char	*spec_char;
	int		i;
	void	(*spec_funct[TOTAL_SPECIFIER])(va_list, t_format*);

	i = -1;
	spec_char = "cspdiuxX%";
	spec_funct[CHAR] = &display_c;
	spec_funct[STRING] = &display_str;
	spec_funct[POINTER] = &display_ptr;
	spec_funct[INT_D] = &display_di;
	spec_funct[INT_I] = &display_di;
	spec_funct[UNSIGNED_INT] = &display_u;
	spec_funct[HEXA_MIN] = &display_hexa;
	spec_funct[HEXA_MAJ] = &display_hexa;
	spec_funct[PERCENT] = &display_pc;
	while (++i < TOTAL_SPECIFIER)
		if (spec_char[i] == fmt->type)
			(*spec_funct[i])(arg, fmt);
}

/*void	get_arg(va_list arg, t_format *fmt)
{
	if (fmt->type == 'd' || fmt->type == 'i')
		display_di(arg, fmt);
	else if (fmt->type == 'u')
		display_u(arg, fmt);
	else if (fmt->type == 'x' || fmt->type == 'X')
		display_hexa(arg, fmt);
	else if (fmt->type == 'p')
		display_ptr(arg, fmt);
	else if (fmt->type == 's')
		display_str(arg, fmt);
	else if (fmt->type == 'c')
		display_c(arg, fmt);
	else if (fmt->type == '%')
		display_pc(arg, fmt);
}*/

void	print_space(t_format *fmt, long long data)
{
	/*if (fmt->type == 's')
	{
		if (fmt->zero && !fmt->minus && !fmt->dot && !fmt->prec)
			return ;
		if (fmt->prec && fmt->prec < fmt->data_len)
			fmt->space_len = fmt->width - fmt->prec;
		else
			fmt->space_len = fmt->width - fmt->data_len;
	}
	else
	{*/
		if (fmt->data_len < fmt->prec)
			fmt->space_len = fmt->width - fmt->prec;
		else
			fmt->space_len = fmt->width - fmt->data_len;
		if (data < 0)
			fmt->space_len--;
		if (fmt->type == 'p')
			fmt->space_len -= 2;
		if (fmt->zero && !fmt->dot && !fmt->prec)
			fmt->space_len -= fmt->width - fmt->data_len;
//	}
	while (fmt->space_len-- > 0)
		ft_putchar(' ', fmt);
}

void	print_zero(t_format *fmt, long long data)
{
	if (fmt->type == 's' || fmt->type == 'c')
	{
		if (fmt->zero && !fmt->minus)
			fmt->zero_len = fmt->width - fmt->data_len;
	}
	else
	{
		if (fmt->zero && !fmt->dot && !fmt->prec)
		{
			fmt->zero_len = fmt->width - fmt->data_len;
			if (data < 0)
				fmt->zero_len--;
		}
		else
			fmt->zero_len = fmt->prec - fmt->data_len;
	}
	while (fmt->zero_len-- > 0)
		ft_putchar('0', fmt);
}
