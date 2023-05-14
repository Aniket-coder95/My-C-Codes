#include<stdio.h>

void checkleapyear(int year)
{
	if(year % 400 == 0)
		printf("It's a leap year");
	else if (year % 100 == 0)
		printf("it's a leap year");
	else if( year % 4 == 0)
		printf("it's a leap year");
	else
		printf("Opps! not a leap year");
}

int main(int argc, char const *argv[])
{
	int year;
	printf("Enter year to check : ");
	scanf("%d",&year);

	checkleapyear(year);
	/* code */
	printf("\n");
	return 0;
}