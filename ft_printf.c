/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 11:27:49 by cregazzo          #+#    #+#             */
/*   Updated: 2021/02/17 14:52:36 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

int				ft_printf(const char *str, ...)
{
	va_list		arg;
	t_format		fmt;

	clean_struct(&fmt);
	fmt.count = 0;
	va_start(arg, str);
	parse(arg, (char *)str, &fmt);
	va_end(arg);
	return (fmt.count);
}

void			clean_struct(t_format *fmt)
{
	fmt->minus = 0;
	fmt->zero = 0;
	fmt->width = 0;
	fmt->dot = 0;
	fmt->prec = 0;
	fmt->type = 0;
	fmt->data_len = 0;
	fmt->space_len = 0;
	fmt->zero_len = 0;
}