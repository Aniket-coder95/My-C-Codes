#include<stdio.h>

int main(int argc, char const *argv[])
{
	int a=0, b=1, c, itration;
	/* code */
	printf("enter no of iteration ");
	scanf("%d", &itration);
	printf("%d ",a );
	printf("%d ",b );
	for(int i=0 ; i<= (itration-2) ; i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",(a+b) );
	}
	printf("\n");
	return 0;
}