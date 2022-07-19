#include <stdio.h>
/* This program replaces the do-while loop with a for loop */

int main()
{
	int x;

	for (x=65; x<72; x++)
		printf("The numeric value of %c is %d\n", x, x);
	return(0);
}
