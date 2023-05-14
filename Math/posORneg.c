#include <stdio.h>

void ispositive(int num)
{
	if (num > 0)
		printf("numer '%d' is positive",num);
	else
		printf("numer '%d' is negative",num);
}

void iseven(int num){
	if (num%2 == 1)
		printf("numer '%d' is odd",num);
	else
		printf("numer '%d' is even",num);
}

int main(int argc, char const *argv[])
{
	int number = 0, number1 = 0, number2 = 0;

	printf("To check positive or negative : 1\n");
	printf("To check even and odd : 2\n");
	scanf("%d", &number);

	if (number == 1)
	{
		printf("Please enter the number1 : \n");
		scanf("%d", &number1);
		ispositive(number1);
	}else if(number == 2)
	{
		printf("Please enter the number2 : \n");
		scanf("%d", &number2);
		iseven(number2);
	}else{
		printf("enter corrctly");
	}
	return 0;
}