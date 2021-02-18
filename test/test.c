#include <stdio.h>

int main()
{
	int n = 125;
	int *p = &n;
	printf("%p est l'adresse de la valeur %d\n", p, *p);
	return (0);
}
