#include<stdio.h>

int main()
{
	int str[] = {12,85,1,1,1,2,2,45,5,4,45,85};
	int len = sizeof(str)/sizeof(str[0]);

	printf("%d\n",len );
	return 0;
}