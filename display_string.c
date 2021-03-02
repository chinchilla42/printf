/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:09:09 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/02 11:09:25 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	display_str(t_data *data)
{
	char *str;

	str = va_arg(data->arg, char *);
	ft_putstr_fd(str, 1);
}