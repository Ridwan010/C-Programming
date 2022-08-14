#include <stdio.h>
/* A program containing different programs */
int main()
{
	/* The code below prints the decimal values of x and y */
	int x;
	unsigned int y;

	x = 0xAB78;
	y = 0xAB78;
	printf("The decimal value of x = %d\n", x);
	printf("The decimal value of y = %u\n", y);
	
	/* The codes below prints the size of operator */
	printf("The size of short int is %ld\n", sizeof(short int));
	printf("The size of long  int is %ld\n", sizeof(long int));
	printf("The size of long double is %ld\n", sizeof(long double));
	return(0);
}
