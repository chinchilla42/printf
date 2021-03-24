/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:09:09 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/24 14:20:37 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		display_str(va_list arg, t_format *fmt)
{
	char			*s;

	s = 0;
	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	fmt->data_len = ft_strlen(s, fmt);
	if (fmt->minus == 0)
		print_space(fmt, 0);
	print_zero(fmt, 0);
	ft_putstr(s, fmt);
	if (fmt->minus == 1)
		print_space(fmt, 0);
}
