/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 15:00:25 by cregazzo          #+#    #+#             */
/*   Updated: 2021/02/17 14:52:39 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct	s_data
{
	int i;
	int count;
	va_list arg;

}				t_data;

int		ft_printf(char *str, ...);
void	ft_putnbr_base(int nbr, char *base);
char		*ft_itoa_base(long n, char *base);
void	ft_putnbr_unsigned(unsigned n);