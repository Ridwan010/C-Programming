#include <stdio.h>
/* A program that contains different programs */
int main()
{
	int x;
	int y;

	x = 1;
	y = 3; /* A program that prints the results of the following */
	printf("Given x = %d, y = %d\n", x, y);
	x = 1;
	y = 3;
	x += y;
	printf("The value of x += y = %d\n", x);
	x = 1;
	y = 3;
	x += -y;
	printf("The value of x += -y = %d\n", x);
	x = 1;
	y = 3;
	x -= y;
	printf("The value of x -= y = %d\n", x);
	x = 1;
	y = 3;
	x -= -y;
	printf("The value of x -= -y = %d\n", x);
	x = 1;
	y = 3;
	x *= y;
	printf("The value of x *= y = %d\n", x);
	x = 1;
	y = 3;
	x *= -y;
	printf("The value of x *= -y = %d\n", x);

	int z;

	x = 3;
	y = 6;
	printf("Given x = %d and y = %d\n", x, y);
	x = 3;
	y = 6;
	z = x * y == 18; /* A program that prints z results */
	printf("The value of z = %d\n", z);

	x = 1;
	printf("x = x++ produces: %d\n", x++);
	printf("Now x produces: %d\n", x++);
	return(0);
}
