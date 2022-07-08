/* A function that multiply two integers */
#include <stdio.h>
int integer_mul( int x, int y )
{
	int result;
	result = x * y;
	return result;
}
int main()
{
	int mul;

	mul = integer_mul(3, 5);
	printf("The multiplication of 3 and 5 is %d.\n", mul);
	return (0);
}
	
