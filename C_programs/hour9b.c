#include <stdio.h>
/* This program displays negative integers in hex format */
int main()
{
	signed int x;
	
	x = -23456;
	printf("The hex value of -23456 is 0x%04X\n", x);
	return(0);
}
