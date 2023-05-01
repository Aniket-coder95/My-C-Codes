#include<stdio.h>
void words(int num)
{
	switch(num){
	case 0:
		printf("\n%s","Zero " );
		break;
	case 1:
		printf("%s","One " );
		break;
	case 2:
		printf("%s","Two " );
		break;
	case 3:
		printf("%s","Three " );
		break;
	case 4:
		printf("%s","Four " );
		break;
	case 5:
		printf("%s","Five " );
		break;
	case 6:
		printf("%s","Six " );
		break;
	case 7:
		printf("%s","Seven " );
		break;
	case 8:
		printf("%s","Eight " );
		break;
	case 9:
		printf("%s","Nine " );
		break;
	}
}
int reverse(int num){
	int result = 0;
	while(num>0){
		int x=0;
		x = num%10;
		result = result *10 + x;
		num = num / 10;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	int num,num1=0;
	printf("Please enter the number: ");
	scanf("%d",&num);
	num1 = reverse(num);
	// printf("%d hjoijhnijnmk", num1);

	while(num1 > 0){
		int x=0;
		x = num1 % 10;
		words(x);
		num1 = num1 / 10;
	}
	return 0;
}