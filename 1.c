//print 1 to 100 without using conditional operator

#include<stdio.h>

void main()
{
	unsigned short int a=1,b=100;

	while(b--)
		printf("%2d\t",a++);

}	
