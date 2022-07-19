#include <stdio.h>
/* A program containing two different programs */

int main()
{
	int i;
	int j;

	for (i=0, j=1; i < 8; i++, j++)
		printf("%d + %d = %d\n", i, j, i+j);

	for (i=0, j=1; i<8; i++, j++);
	printf("\n%d + %d = %d\n", i, j, i+j);
	/* Comparing the result of the two for loop above */
	return(0);
}
