#include <stdio.h>
/* Testing a one dimensional array */
int main()
{
	int x[3];

	x[0] = 2;
	printf("The value of x is %d\n", x[0]);
	x[1] = 3;
	printf("The value of x changed to %d\n", x[1]);
	x[2] = 4;
	printf("The value of x changed to %d\n", x[2]);
	return(0);
}
