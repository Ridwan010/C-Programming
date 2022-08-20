#include <stdio.h>
/* This program re-writes a program of an if statement in a different way */
int main()
{
	int x[3];

	printf("Integers that can be divided by both 2 and 3\n");
	printf("(Within the range of 0 to 100):\n");
	for (x[0] = 0; x[0] <= 100; x[0]++)
	{
		if (( x[0] % 6 == 0))
			printf("This number when divided by 6 is 0 which is %d.\n", x[0]);
		else
			printf("This number when divided by 6 is not 0 which is %d.\n", x[0]);
	}
	printf("\n");
	printf("\n");

	/* Rewriting the code above using nested if statement */
	for (x[1] = 0; x[1] <= 100; x[1]++)
	{
		if ( x[1] % 2 == 0)
			if (x[1] % 3 == 0)
				printf("x divided by 6 is 0 and the number is %d\n", x[1]);
			else
				printf(" x divided by 6 is not 0 and the number is %d\n", x[1]);
	}
	/* Rewriting the codes above but expanding the range of array variable x from -100 to 100 */
	for (x[2] = -100; x[2] <= 100; x[2]++)
	{
		if (x[2] > 0)
			if (x[2] % 6 == 0)
				printf("Using nested if, this number when divided by 6 is 0 which is %d\n", x[2]);
		else if (x[2] == 0)
			printf("Using nested if, this number is 0 %d\n", x[2]);
		else
			printf("Using nested  if, this number when divided by 6 is not 0 which is %d\n", x[2]);
		else if (x[2] < 0)
			printf("This is a negative number %d\n", x[2]);
	}
	return(0);
}
