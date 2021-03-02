/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:10:39 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/02 11:10:56 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	dipslay_hexa_min(t_data *data)
{
	int n;

	n = va_arg(data->arg, int);
	ft_putnbr_base(n, "0123456789abcdef");
}

void	display_hexa_maj(t_data *data)
{
	int n;

	n = va_arg(data->arg, int);
	ft_putnbr_base(n, "0123456789ABCDEF");
}