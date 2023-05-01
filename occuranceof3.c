#include<stdio.h>

int findout(int num){
	int c = 0, x=0, temp = 0;
	// printf("Noooo %d == %d\n",num,c);
	while(num>0){
		temp = num % 10;
		// printf("PPPPPP %d \n",temp);
		if(temp == 3)
			c++;
		else if(temp > 9){
			x = findout(temp);
			c = c + x; 
		}

		num /= 10;
	}
	// printf("Noooo %d == %d\n\n",num,c);
	
return c;
}

int main(int argc, char const *argv[])
{
	int num =0 , i=0;
	static int count=0; 
	printf("Please enter the value of n: ");
	scanf("%d",&num);
	while(i>=0 && i<=num){
		if(i == 3)
			count++;
		else if(i > 9)
			count = count + findout(i);
			// printf("ooooooooo %d == %d .\n",i,count);
		++i;
	}
	printf("No of count of 3 is %d .\n",count);
	return 0;
}