#include <stdio.h>

void is_alphabet(char *ch){
	if((*ch >= 65 && *ch <= 90) || (*ch >= 96 && *ch <= 122))
		printf("Hurrah! '%c' is an alphabet\n", *ch);
	else
		printf("Oops! not an alphabet\n");
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