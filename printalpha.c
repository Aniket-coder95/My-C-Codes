#include <stdio.h>
#include <string.h>
#define Max 100

void printalpha(char* str){
	char string[Max];
	int len = strlen(str)-1,i,j=0;

	for(i=0 ; i<len ; ){
		if((str[i] >= 65 && str[i] <=90)  || (str[i] >= 97 && str[i] <= 122) ){
			string[j++]=str[i];
		}
		++i;
		
	}
	str[j]='\0';
	printf("Final String:- %s \n", string);

}

int main (void) {
   char string[Max];
   printf("Please enter the string: ");
   fgets(string , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   printalpha(string);
   
   return 0;
}
