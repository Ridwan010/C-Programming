#include <stdio.h>
int main()
{
	int x;
	printf("Enter 1 to print A, B and C \n");
	
	x = getchar();
	switch (x)
	{
		case '1':
			printf("A, and the numeric value is %d\n", 'A');
		case '2':
			printf("B, and the numeric value is %d\n", 'B');
		case '3':
			printf("C, and the numeric value is %d\n", 'C');
		default:
		;
	}
	return(0);
}
