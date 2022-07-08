#include <stdio.h>
/* A program that contains different types of program */
int main()
{
	{
		char x;
		char y;
		
		x = 'Z';
		y = 'z';
		printf("The numeric value of Z is: %d.\n", x);
		printf("The numeric value of z is: %d.\n", y);
	}
	{
		int i;
		int j;

		i = 72;
		j = 104;
		printf("The character of 72 is: %c.\n", i);
		printf("The character of 104 is: %c.\n", j);
	}
	{
		float dbl_num;

		dbl_num = 123.456;
		printf("The floating_point of 123.456 is: %f.\n", dbl_num);
		printf("The scientific notation of 123.456 is: %e\n", dbl_num);
	}
	{
		char k;

		k = '\n';
		printf("The numeric value of \n is: %d.\n", k);
	}
	return (0);
}
