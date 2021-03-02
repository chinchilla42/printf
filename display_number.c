/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_number.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:07:58 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/02 11:08:26 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_int(t_data *data)
{
	int n;
	
	n = va_arg(data->arg, int);
	ft_putnbr_fd(n, 1);
}

void	display_unsigned(t_data *data)
{
	unsigned n;
	n = va_arg(data->arg, int);
	ft_putnbr_unsigned(n);
}