  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define Max 100

void cap(char* str){
	int len = strlen(str);
	str[0] = toupper(str[0]);
	str[len-1] = toupper(str[len-1]);
	for (int i = 1; i < len-2; ++i)
	{
		if(str[i] == ' '){
			str[i-1] = toupper(str[i-1]);
			str[i+1] = toupper(str[i+1]);
		}
	}
	printf("Final String : %s\n",str);
}

int main (void) {
   char string[Max];
   printf("Please enter the string: ");
   fgets(string , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   cap(string);
   
   return 0;
}
