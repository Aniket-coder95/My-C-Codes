#include<stdio.h>

void upper(int row){
	int k;
	for (int i = 1; i <= row; i++)
	{
		k=1;
		for(int j = (row-i) ; j > 0 ; --j ){
			printf(" ");
		}
		while(k <= ((i*2)-1) )
		{
			printf("*");
			k++;
		}
		printf("\n");
	}
}

void lower(int row){
	int k;
	for (int i = row-1; i>0; i--)
	{
		k=1;
		for(int j = (row-i) ; j > 0 ; --j ){
			printf(" ");
		}
		while(k <= ((i*2)-1) )
		{
			printf("*");
			k++;
		}
		printf("\n");
	}
}
int main(int argc, char const *argv[])
{
	int row;
	printf("Enter rows: ");
	scanf("%d",&row);

	upper(row);
	// printf("-----------------------------------\n");
	lower(row);
	printf("\n");
	return 0;
}