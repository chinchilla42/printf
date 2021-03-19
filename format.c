/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:02:20 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/18 16:00:37 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	parse(va_list arg, char *str, t_format *fmt)
{
	while (*str)
	{
		if (*str == '%')
		{
			++str;
			get_flag(&str, fmt);
			get_width(arg, &str, fmt);
			get_precision(arg, &str, fmt);
			get_type(&str, fmt);
			get_arg(arg, fmt);
			clean_struct(fmt);
		}
		else
			ft_putchar(*(str)++, fmt);
	}
}

void	get_flag(char **str, t_format *fmt)
{
	while (**str == '-' || **str == '0' || **str == '+' || ** str == ' ' || **str == '#')
	{
		if (**str == '-')
			fmt->minus = 1;
		if (**str == '0')
			fmt->zero = 1;
		if (**str == '+')
			fmt->plus=1;
		if (**str == ' ')
			fmt->space = 1;
		if (**str == '#')
			fmt->dash = 1;
		(*str)++;
	}
	if (fmt->minus && fmt->zero)
		fmt->zero = 0;
}

void	get_width(va_list arg, char **str, t_format *fmt)
{
	if (**str == '*')
	{
		fmt->width = va_arg(arg, int);
		if (fmt->width < 0)
		{
			if (fmt->zero)
				fmt->zero = 0;
			fmt->width *= -1;
			fmt->minus = 1;
		}
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		fmt->width = (fmt->width * 10) + **str - '0';
		(*str)++;
	}
}

void	get_precision(va_list arg, char **str, t_format *fmt)
{
	if (**str == '.')
	{
		fmt->dot = 1;
		(*str)++;
	}
	if (**str == '*')
	{
		fmt->prec = va_arg(arg, int);
		if (fmt->prec < 0)
		{
			fmt->prec = 0;
			fmt->dot = 0;
		}
		(*str)++;
	}
	while (**str >= '0' && **str <= '9')
	{
		fmt->prec = (fmt->prec * 10) + **str - '0';
		(*str)++;
	}
}

void	get_type(char **str, t_format *fmt)
{
	if (**str == 'c' || **str == 's' || **str == 'p' || **str == 'd' ||
		**str == 'i' || **str == 'u' || **str == 'x' || **str == 'X' ||
		**str == '%')
		fmt->type = **str;
	else
		return ;
	(*str)++;
}
