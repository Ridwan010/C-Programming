#include <stdio.h>
/* A program that prints from 1 - 100 */
int main()
{
	int n;

	n = 1;
	printf("%d", n);
	for (n = 2; n <=100; n++)
	
	if (( n % 3 == 0 ) && ( n % 5 == 0 ))
	{
		printf("FizzBuzz");
	}
	else if (n % 3 == 0 )
	{
		printf("Fizz");
	}
	else if (n % 5 == 0);
	{
		printf("Buzz");
	}
	printf("%d\n", n);
	return (0);
}
