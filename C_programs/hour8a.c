#include <stdio.h>
/* A program that tests the conditional operator with the for statement */
int main()
{
	int x;
	printf("Enter a character:\n Enter q to exit\n");

	for (x = ' '; x != 'q' ? 1 : 0;)
	{
		x = getc(stdin);
		putchar(x);
	}
	printf("\nThe loop has been successfully exited\n"); 
	return(0);
}
