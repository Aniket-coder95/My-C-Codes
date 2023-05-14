#include<stdio.h>

int main(int argc, char const *argv[])
{
	int h = 4 , w=8;
	for (int i = 0; i < 4; ++i)
	{
		for(int j= 0 ; j<w ; j++){
			if (i == 0 || i==(h-1) || j == 0 || j==(w-1))
				printf("%s","* ");
			else
				printf("%s","  ");
		}
		printf("\n");
	}
	printf("\n\n");
	for (int i = 0; i < 4; ++i)
	{
		for(int j= 0 ; j<w ; j++){
			printf("%s","* ");
		}
		printf("\n");
	}
	return 0;
}