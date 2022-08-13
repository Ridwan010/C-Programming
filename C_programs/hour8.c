#include <stdio.h>
/* A programs containing different programs */
int main()
{
	/* The program prints the  integer hex value of x and ~x */
	int x, y;

	x = 0xEFFF;
	y = 0x1000;

	printf("Integer and hex value of x = %u and %X\n", x, ~x);
	printf("Integer and hex value of y = %u and %X\n", y, ~y);
	
	/* The printf function below prints the valuse of !x and !y */
	printf("The value of !x = %d and %u\n", !x, !x);
	printf("The value of !y = %d and %u\n", !y, !y);

	/* A codes below prints the right value and left value of oth i and j */
	int i, j;
	 
	i = 123;
	j = 4;
	printf("Given i = %d and j = %d\n", i, j );
	printf("The value of i << j = %d i.e hex = %X\n", i << j, i << j);
	printf("The value of i >> j = %d i.e hex = %X\n", i >> j, i >> j);
	return(0);
}
