#include<stdio.h>

void ninediv(int num)
{
	int count = 1;
	for (int i = 1 ; i <= num/2 ; i++)
	{
		if(num % i ==  0)
			count++;
	}
	if (count == 9)
	{
		printf("%d ",num);
		// printf("%s", "true");
	}else{
		// printf("%s", "false");
	}
}

int main(int argc, char const *argv[])
{
	int num;
	printf("please enter the no: ");
	scanf("%d", &num);

	for(int i=1 ; i<=num; i++){
		ninediv(i);
	}
	return 0;
}