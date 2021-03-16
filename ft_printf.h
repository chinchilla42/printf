/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dataf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:00:25 by cregazzo          #+#    #+#             */
/*   Updated: 2021/02/17 14:52:39 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

# define DEC "0123456789"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

typedef struct	s_format
{
	int			minus;
	int			zero;
	int			width;
	int			dot;
	int			prec;
	int			type;
	int			data_len;
	int			space_len;
	int			zero_len;
	int			count;
}				t_format;

int				ft_printf(const char *str, ...);
void			clean_struct(t_format *fmt);
void			parse(va_list arg, char *str, t_format *fmt);
void		get_flag(char **str, t_format *fmt);
void		get_width(va_list arg, char **str, t_format *fmt);
void		get_precision(va_list arg, char **str, t_format *fmt);
void		get_type(char **str, t_format *fmt);
void			print(va_list arg, t_format *fmt);
void		display_c(va_list arg, t_format *fmt);
void		display_str(va_list arg, t_format *fmt);
void		print_space(t_format *fmt, long long data);
void		print_zero(t_format *fmt, long long data);
void		display_di(va_list arg, t_format *fmt);
void		display_u(va_list arg, t_format *fmt);
void		display_hexa(va_list arg, t_format *fmt);
void		display_ptr(va_list arg, t_format *fmt);
void			ft_putchar(char c, t_format *fmt);
void			ft_putstr(char *s, t_format *fmt);
void			ft_putnbr_base(long long n, char *base, t_format *fmt);
int				ft_strlen(char *str, t_format *fmt);
int				ft_nbrlen_base(long long n, char *base, t_format *fmt);

#endif