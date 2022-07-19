#include <stdio.h>
/* A program that replaces 2 for loop with a while loop and a do-while loop */

int main()
{
	int i;
	int j;

	i = 1;

	while (i<=3) 
	{ 
		printf("The begining of the outer loop is %d.\n", i);
		j=1;
	
	do
	{
		printf(" inner loop is %d.\n", j);
		j++;
	}
	while (j<=4);
	i++;
		printf("The end of loop of is %d.\n", i);
	}
	return(0);
}
