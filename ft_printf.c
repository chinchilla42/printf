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

void	treat_char(t_data *data)
{
	char d;

	d = va_arg(data->arg, int);
	write(1, &d, 1);
}

void	treat_str(t_data *data)
{
	char *str;

	str = va_arg(data->arg, char *);
	ft_putstr_fd(str, 1);
}

void	treat_int(t_data *data)
{
	int n;
	
	n = va_arg(data->arg, int);
	ft_putnbr_fd(n, 1);
}



void	get_arg(t_data *data, char c)
{
	if (c == 'c')
		treat_char(data);
	if (c == 's')
		treat_str(data);
	if (c == 'd' || c == 'i')
		treat_int(data);
	else if (c == 'x' || c == 'X')
		treat_hexa(data);
	
	//else if (c == 'p')
	if (c == '%')
		write(1, "%", 1);
	data->i++;
}


int ft_printf(char *str, ...)
{
	t_data data;
	data.i = 0;
	data.count = 0;
	va_start(data.arg, str);
	while (str[data.i])
	{
		if (str[data.i - 1] == '%' && data.i > 0)
		{
			get_arg(&data, str[data.i]);
		}
		if (str[data.i] != '%')
			write(1, &str[data.i], 1);
		data.i++;
	}
	va_end(data.arg);
	return(data.count);
}
