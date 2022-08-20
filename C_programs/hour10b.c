#include <stdio.h>
/* A program that keeps reading character from stdin until character q is entered */
int main()
{
	int x;

	for (x = ' '; x != 'q';)
	{
		x = getc(stdin);
		putchar(x);
	}
		printf("\nThe loop has been successfully exited\n");
	return(0);
}
