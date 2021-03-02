#include <stdio.h>

int main()
{
	printf("sans flags :\n");
	printf("|%d|\n", 0);
	printf("|%d|\n", 123456789);
	printf("|%d|\n", -10);
	printf("|%d|\n", -123456789);
	printf("========\n");	
	printf("avec 3d :\n");
	printf("|%3d|\n", 0);
	printf("|%3d|\n", 123456789);
	printf("|%3d|\n", -10);
	printf("|%3d|\n", -123456789);
	printf("========\n");
	printf("avec -3d :\n");
	printf("|%-3d|\n", 0);
	printf("|%-3d|\n", 123456789);
	printf("|%-3d|\n", -10);	
	printf("|%-3d|\n", -123456789);
	printf("========\n");
	printf("avec 03d :\n");
	printf("|%03d|\n", 0);
	printf("|%03d|\n", 1);	
	printf("|%03d|\n", 123456789);	
	printf("|%03d|\n", -10);	
	printf("|%03d|\n", -123456789);
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
	printf("|%-25p|\n", ptr);

	return (0);
}
