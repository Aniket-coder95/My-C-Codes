
#include<stdio.h>
int main(int argc, char const *argv[])
{
	int num = 12;
	for(int i=4 ; i >= 0 ; i--){

		printf("%d ",(num >> i) & 1 );
	}
	return 0;
}