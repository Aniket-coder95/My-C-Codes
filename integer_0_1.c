#include<stdio.h>

int replace(int num){
	int rev = 0, tmp = 0;
	while(num>0){
		tmp = num % 10;
		if(tmp == 0)
			rev = rev * 10 + 1;
		else
			rev = rev * 10 + tmp;
		num /= 10;
	}
	return rev;
}

int reverse (int num){
	int rev = 0, tmp = 0;
	while(num > 0){
		tmp = num % 10;
		rev = rev * 10 + tmp;
		num = num / 10;
	}
	return rev;
}

int main(int argc, char const *argv[])
{
	int number;
	printf(" Enter your number please! ");
	scanf("%d",&number);

	int rev = replace(number);
	// printf("The result is %d \n\n\n", rev);
	int result = reverse(rev);
	printf("The result is %d \n", result);
	return 0;
}