#include<stdio.h>

void dectobin(int num)
{
	int x[num], j=0;
	while(num > 0){
		int tmp = 0;
		tmp = num % 2;
		x[j] = tmp;
		j++;
		num = num / 2;
	}
	for (j=j-1 ; j >=0 ; j--)
	{
		printf("%d ",x[j]);
	}

}

void printbin(int num){
	int n;
	printf("Enter compiler size in bits: ");
	scanf("%d", &n);
	for(int i=(n-1) ; i >= 0 ; i--){

		printf("%d ",(num >> i) & 1 );
	}
}

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter your no: ");
	scanf("%d", &num);

	// dectobin(num);
	printbin(num);
	printf("\n");
	return 0;
}