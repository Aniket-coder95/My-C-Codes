#include<stdio.h>
#include<string.h>
#define MAX_LEN 50

void reverse(char *str1){
	int temp , len;
	len =strlen(str1);

	
	for (int i = 0; i < len/2 ; i++)
	{
		temp = str1[i];
		str1[i] = str1[len-i-1];
		str1[len-i-1] = temp;		
	}

}

int main(){
	char str[MAX_LEN];
	printf("Please enter your string: ");
	fgets(str , MAX_LEN, stdin);

	reverse(str);
	printf("%s\n ",str);

	return 0;
}