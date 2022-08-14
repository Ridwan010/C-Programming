#include <stdio.h>
/* This program re-writes a program of an if statement in a different way */
int main()
{
	int x;

	printf("Integers that can be divided by both 2 and 3\n");
	printf("(Within the range of 0 to 100):\n");
	for (x = 0; x <= 100; x++)
	{
		if (( x % 6 == 0))
			printf("This number when divided by 6 is 0 which is %d.\n", x);
		else
			printf("This number when divided by 6 is not 0 which is %d.\n", x);
	}
	return(0);
}
