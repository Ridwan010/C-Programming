#include <stdio.h>
/* A program that multiplies two signed int variables with positive values, and displays the result as a long int. */
signed int multiply (int x, int y)
{

	int result;
	
	result = x * y;
	return result;
}
int main()
{
	int multiplication;

	multiplication = multiply (7000, 12000);
	printf("The multiplication of x and y is %d.\n", multiplication);
	
	int x, y;
      	long int result;

	x = 7000;
	y = 12000;
	result = x * y;
	printf("The multiplication of x and y is %ld.\n",  result);
	return(0);
}
