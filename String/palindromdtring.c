
#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20

void palindrom(char str[MAX_LIMIT]){
	int len = (int)strlen(str);
	printf("%d",len);
	for (int i=0, j=len-2; i<=len/2 && j>=(len/2); ++i, --j)
	{
		// printf("%c == %c",str[i],str[j] );
		if(str[i] != str[j]){
			printf("Not palindrom\n");
			return;
		}
	}
	printf("palindrom\n");
}
int main()
{
	int j=0;
	char str[MAX_LIMIT];

	printf("Please type your string: ");
	fgets(str, MAX_LIMIT, stdin);
	palindrom(str);
	return 0;
}