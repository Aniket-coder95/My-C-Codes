#include<string.h>
#include<stdio.h>
#include<string.h>
#define MAX_LIMIT 20

int main()
{
	int j=0;
	char str[MAX_LIMIT];
	printf("Please type your string(lowercase): ");
	fgets(str,MAX_LIMIT,stdin);
	int len = (int)strlen(str);
	for(int i=0; i<=len ;i++){
		// printf("%c\n",str[i]);
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			for(int j=i ; j<len-1 ;j++){
				// printf("%c\n",str[j]);
				str[j] = str[j+1];
			}	
		}
	}
	str[len]='\0';
	printf("String without vowels is : ");
	printf("%s\n",str );
	return 0;
}