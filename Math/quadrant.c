#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x , y;
	printf("Hey! please enter the value of x and y: ");
	scanf("%d %d", &x, &y);

	if (x>0 && y >0 )
	{
		printf("Lies in first quadrant");
	}

	if (x>0 && y <0 )
	{
		printf("Lies in second quadrant");
	}

	if (x<0 && y >0 )
	{
		printf("Lies in third quadrant");
	}

	if (x<0 && y <0 )
	{
		printf("Lies in fourth quadrant");
	}

	return 0;
}