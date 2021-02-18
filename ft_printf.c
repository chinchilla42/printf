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

void	treat_unsigned(t_data *data)
{
	unsigned n;
	n = va_arg(data->arg, int);
	ft_putnbr_unsigned(n);
}

void	treat_hexa_min(t_data *data)
{
	int n;

	n = va_arg(data->arg, int);
	ft_putnbr_base(n, "0123456789abcdef");
}

void	treat_hexa_maj(t_data *data)
{
	int n;

	n = va_arg(data->arg, int);
	ft_putnbr_base(n, "0123456789ABCDEF");
}
#include <stdio.h>
void	treat_ptr(t_data* data)
{
	int *p;
	char* ret;

	p = va_arg(data->arg, int*);
	
	ret = ft_itoa_base((long)p, "0123456789abcdef");
	write(1, "0x", 2);
	write(1, ret, ft_strlen(ret));
}

void	get_arg(t_data *data, char c)
{
	if (c == 'c')
		treat_char(data);
	else if (c == 's')
		treat_str(data);
	else if (c == 'd' || c == 'i')
		treat_int(data);
	else if (c == 'u')
		treat_unsigned(data);
	else if (c == 'x')
		treat_hexa_min(data); 
	else if (c == 'X')
		treat_hexa_maj(data);
	else if (c == 'p')
		treat_ptr(data);
	else if (c == '%')
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
