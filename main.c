#include <stdio.h>
# include "ft_printf.h"

int main ()
{
    printf("ceci est un nombre : %i\n", -5);
    ft_printf("ceci est un nombre : %i\n", -5);

    printf("ceci est un nombre : %d\n", 123);
    ft_printf("ceci est un nombre : %d\n", 123);


    printf("ceci est un nombre : %u\n", 87);
   ft_printf("ceci est un nombre : %u\n", 87);

    printf("Ceci est une chaine : %s\n", "salut, comment ca va ?");
    ft_printf("Ceci est une chaine : %s\n", "salut, comment ca va ?");
    
   printf("Ceci est un caractere : %c\n", 'z');
    ft_printf("Ceci est un caractere : %c\n", 'z'); 
    //int n = 125;
	//int *p = &n;
	//ft_printf("%p est l'adresse de la valeur %d\n", p, n);
    printf("45 en hexa = %x\n", 45);
    ft_printf("45 en hexa = %x\n", 45);
return (0);
}

