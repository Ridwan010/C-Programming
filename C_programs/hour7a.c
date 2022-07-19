#include <stdio.h>
/* A program that keeps looping until k character is entered */

int main()
{
	int a;
	
	a = ' ';
	printf(" A starting character is %c", a);
	printf("The loop stops when k is entered");
	while (a != 'k')
	{
		a = getc(stdin);
		putchar(a);
	}
	printf("The loop has been successfully exited\n");
	return(0);
}


