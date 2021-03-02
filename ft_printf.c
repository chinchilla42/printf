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

void	display_char(t_data *data)
{
	char d;

	d = va_arg(data->arg, int);
	write(1, &d, 1);
}

void	get_arg(t_data *data, char c)
{
	if (c == 'c')
		display_char(data);
	else if (c == 's')
		display_str(data);
	else if (c == 'd' || c == 'i')
		display_int(data);
	else if (c == 'u')
		display_unsigned(data);
	else if (c == 'x')
		display_hexa_min(data); 
	else if (c == 'X')
		display_hexa_maj(data);
	else if (c == 'p')
		display_ptr(data);
	else if (c == '%')
		write(1, "%", 1);
	data->i++;
}

int ft_printf(const char *fmt, ...)
{
	t_data data;
	data.i = 0;
	data.count = 0;
	va_start(data.arg, fmt);
	while (fmt[data.i])
	{
		if (fmt[data.i - 1] == '%' && data.i > 0)
		{
			get_arg(&data, fmt[data.i]);
		}
		if (fmt[data.i] != '%')
			write(1, &fmt[data.i], 1);
		data.i++;
	}
	va_end(data.arg);
	return(data.count);
}
