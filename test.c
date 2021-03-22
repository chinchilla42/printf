/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:14:27 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/22 11:13:26 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("|%#12x|\n", 45);	
 	ft_printf("|%#12x|\n", 45);	
	printf("|%#12x|\n", -45);	
	ft_printf("|%#12x|\n", -45);	
	printf("|%#012x|\n", 45);	
	ft_printf("|%#012x|\n", 45);	
	printf("|%#012x|\n", -45);	
	ft_printf("|%#012x|\n", -45);	
	printf("|%#-12x|\n", 45);
	ft_printf("|%#-12x|\n", 45);
	printf("|%#-12x|\n", -45);
	ft_printf("|%#-12x|\n", -45);

/*	printf("%5%\n");
	ft_printf("%5%\n");
	printf("%-5%\n");
	ft_printf("%-5%\n");
	printf("%05%\n");
	ft_printf("%05%\n");
	printf("%-05%\n");
	ft_printf("%-05%\n");*/
	/*printf("sans flags :\n");
	printf("|%d|\n", 0);
	ft_printf("|%d|\n", 0);

	printf("|%d|\n", 0);printf("|%d|\n", 123456789);
	ft_printf("|%d|\n", 0);printf("|%d|\n", 123456789);

	printf("|%d|\n", -10);
	ft_printf("|%d|\n", -10);

	printf("|%d|\n", -123456789);
	ft_printf("|%d|\n", -123456789);

	printf("========\n");	
	printf("avec 3d :\n");
	printf("|%3d|\n", 0);
		ft_printf("|%3d|\n", 0);

	printf("|%3d|\n", 123456789);
		ft_printf("|%3d|\n", 123456789);

	printf("|%3d|\n", -10);
		ft_printf("|%3d|\n", -10);

	printf("|%3d|\n", -123456789);
		ft_printf("|%3d|\n", -123456789);

	printf("========\n");
	printf("avec -3d :\n");
	printf("|%-3d|\n", 0);
		ft_printf("|%-3d|\n", 0);

	printf("|%-3d|\n", 123456789);
		ft_printf("|%-3d|\n", 123456789);

	printf("|%-3d|\n", -10);
		ft_printf("|%-3d|\n", -10);	
	
	printf("|%-3d|\n", -123456789);
		ft_printf("|%-3d|\n", -123456789);

	printf("========\n");
	printf("avec 03d :\n");
	printf("|%03d|\n", 0);
		ft_printf("|%03d|\n", 0);
;
	printf("|%03d|\n", 1);	
		ft_printf("|%03d|\n", 1);	

	printf("|%03d|\n", 123456789);
		ft_printf("|%03d|\n", 123456789);	
	
	printf("|%03d|\n", -10);	
		ft_printf("|%03d|\n", -10);	

	printf("|%03d|\n", -123456789);
		ft_printf("|%03d|\n", -123456789);

	printf("========\n");
	printf("5d : \n|%5d|\n", 10);	
	printf("-5d :\n|%-5d|\n", 10);
	printf("05d :\n|%05d|\n", 10);
	printf("+5d :\n|%+5d|\n", 10);
	printf("-+5d :\n|%-+5d|\n", 10);
	printf("========\n");
	printf("|%s|\n", "Hello");
	printf("|%10s|\n", "Hello");
	printf("|%-10s|\n", "Hello");	
	printf("========\n");
	printf("|%.6s|\n", "Hello");
	printf("|%.3s|\n", "Hello");
	printf("|%.0s|\n", "Hello");
	printf("========\n");	
	printf("|%12x|\n", 45);	
	printf("|%012x|\n", 45);	
	printf("|%-12x|\n", 45);	
	printf("========\n");	
	char* p = NULL; 
    printf( "%s\n", p); 
	printf("========\n");
	int n = 125;
	int *ptr = &n;
	printf("|%25p|\n", ptr);
	printf("|%-25p|\n", ptr);*/

	return (0);
}
