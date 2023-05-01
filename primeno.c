#include<stdio.h>

void checkprime(int num)
{
	if(num ==0 || num == 1)
		printf("not prime");

	int tmp = 0 ;
	for(int i=2 ; i< (num/2) ; i++)
	{
		if (num%i == 0)
			tmp++;
	}
	if (tmp == 0)
		printf("Its prime no");
	else
		printf("not prime");
}

int main(int argc, char const *argv[])
{
	int num;
	printf("Enter you no to check ");
	scanf("%d",&num);

	checkprime(num);

	return 0;
}