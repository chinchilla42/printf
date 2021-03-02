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

void	display_ptr(t_data* data)
{
	int *p;
	char* ret;

	p = va_arg(data->arg, int*);
	
	ret = ft_itoa_base((long)p, "0123456789abcdef");
	write(1, "0x", 2);
	write(1, ret, ft_strlen(ret));
}
