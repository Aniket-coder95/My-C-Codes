#include <stdio.h>

void is_alphabet(char *ch)
{
	if(*ch >= 65 && *ch <= 90)
	{
		for(int i=65 ; i<91 ; i++)
			if(*ch == i)
				 printf("Hurrah! ascii of '%c' is '%d'\n", *ch, i);
	}
	else if(*ch >= 96 && *ch <= 122)
	{
		for(int i= 96 ; i<123 ; i++)
			if(*ch == i)
				 printf("Hurrah! ascii of '%c' is '%d'\n", *ch, i);
	}
	else
	{
		printf("OOPS!");
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	char c;
	printf("Input : ");
	scanf("%c", &c);
	is_alphabet(&c);
	return 0;
}