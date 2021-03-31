/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cregazzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 14:14:27 by cregazzo          #+#    #+#             */
/*   Updated: 2021/03/31 16:55:51 by cregazzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int main()
{
	printf("0*. et -1\n");
	printf("1-->|%0*.%|<--\n", -1);
	ft_printf("1-->|%0*.%|<--\n", -1);
	printf("0*. et 0\n");
	printf("2-->|%0*.%|<--\n", 0);
	ft_printf("2-->|%0*.%|<--\n", 0);
	printf("0*. et 1\n");
	printf("3-->|%0*.%|<--\n", 1);
	ft_printf("3-->|%0*.%|<--\n", 1);
	printf("0*. et 2\n");
	printf("4-->|%0*.%|<--\n", 2);
	ft_printf("4-->|%0*.%|<--\n", 2);
	printf("0*. et 3\n");
	printf("5-->|%0*.%|<--\n", 3);
	ft_printf("5-->|%0*.%|<--\n", 3);
	printf("04.3\n");
	printf("6-->|%04.3%|<--\n");
	ft_printf("6-->|%04.3%|<--\n");
	printf("04.4\n");
	printf("7-->|%04.4%|<--\n");
	ft_printf("7-->|%04.4%|<--\n");
	printf("7b-->|%04.5%|<--\n");
	ft_printf("7b-->|%04.5%|<--\n");

	printf("04\n");
	printf("8-->|%04%|<--\n");
	ft_printf("8-->|%04%|<--\n");
	printf("--4.\n");
	printf("9-->|%--4.%|<--\n");
	ft_printf("9-->|%--4.%|<--\n");
	printf("--4.* et -4\n");
	printf("10-->|%--4.*%|<--\n", -4);
	ft_printf("10-->|%--4.*%|<--\n", -4);

	printf("11\n");
	printf("-->|%-4.%|<--\n");
	ft_printf("-->|%-4.%|<--\n");

	printf("12\n");
	printf("-->|%-4.%|<--\n", -4);
	ft_printf("-->|%-4.%|<--\n", -4);

	printf("13\n");
	printf("-->|%-4.%|<--\n", -3);
	ft_printf("-->|%-4.%|<--\n", -3);

	printf("14\n");
	printf("-->|%-4.%|<--\n", -2);
	ft_printf("-->|%-4.%|<--\n", -2);

	printf("15\n");
	printf("-->|%-4.%|<--\n", -1);
	ft_printf("-->|%-4.%|<--\n", -1);

	printf("16\n");
	printf("-->|%-4.1%|<--\n");
	ft_printf("-->|%-4.1%|<--\n");

	printf("17\n");
	printf("-->|%-4.2%|<--\n");
	ft_printf("-->|%-4.2%|<--\n");

	printf("18\n");
	printf("-->|%-4.3%|<--\n");
	ft_printf("-->|%-4.3%|<--\n");
	
	printf("19\n");
	printf("-->|%-4.4%|<--\n");
	ft_printf("-->|%-4.4%|<--\n");

	printf("20\n");
	printf("-->|%-4%|<--\n");
	ft_printf("-->|%-4%|<--\n");

//	printf("%04.3i\n", 4);
//	ft_printf("%04.3i\n", 4);
	/*printf("|%#12x|\n", 45);	
	printf(" %#x ", 0);
	printf(" %#2x ", 0);
	printf(" %#02x ", 0);
	printf(" %#-03x ", 0);
	printf(" %#-03.x ", 0);
	printf(" %#-03.1x ", 0);
	printf(" %#-03.2x ", 0);
	printf(" %#-03.*x ", 2, 0);
	printf(" %#x ", 1);
	printf(" %#2x ", 1);
	printf(" %#02x ", 1);
	printf(" %#-03x ", 1);
	printf(" %#-03.x ", 1);
	printf(" %#-03.1x ", 1);
	printf(" %#-03.2x ", 1);
	printf(" %#-03.*x ", 2, 1);
	printf(" %#X ", 0);
	printf(" %#2X ", 0);
	printf(" %#02X ", 0);
	printf(" %#-03X ", 0);
	printf(" %#-03.X ", 0);
	printf(" %#-03.1X ", 0);
	printf(" %#-03.2X ", 0);
	printf(" %#-03.*X ", 2, 0);
	printf(" %#X ", 1);
	printf(" %#2X ", 1);
	printf(" %#02X ", 1);
	printf(" %#-03X ", 1);
	printf(" %#-03.X ", 1);
	printf(" %#-03.1X ", 1);
	printf(" %#-03.2X ", 1);
	printf(" %#-03.*X ", 2, 1);*/

	/* 	ft_printf("|%#12x|\n", 45);	
	printf("|%#12x|\n", -45);	
	ft_printf("|%#12x|\n", -45);	
	printf("|%#012x|\n", 45);	
	ft_printf("|%#012x|\n", 45);	
	printf("|%#012x|\n", -45);	
	ft_printf("|%#012x|\n", -45);	
	printf("|%#-12x|\n", 45);
	ft_printf("|%#-12x|\n", 45);
	printf("|%#-12x|\n", -45);
	ft_printf("|%#-12x|\n", -45);*/

	printf("11%5%\n");
	ft_printf("11%5%\n");
	printf("12%-5%\n");
	ft_printf("12%-5%\n");
	printf("13%05%\n");
	ft_printf("13%05%\n");
	printf("14%-05%\n");
	ft_printf("14%-05%\n");

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
