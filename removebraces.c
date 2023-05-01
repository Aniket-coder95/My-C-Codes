#include <stdio.h>
#include <string.h>
#define Max 100

void rembraces(char* str){
	char string[Max];
	int len = strlen(str)-1,i,j=0;

	for(i=0 ; i<len ; ){
		if((str[i] == '(') || (str[i] == ')') ){
			++i;
		}else{
			string[j++]=str[i];
			++i;
		}
		
	}
	str[j]='\0';
	printf("String after removing braces :- %s \n", string);

}

int main (void) {
   char string[Max];
   printf("Please enter the string with braces : ");
   fgets(string , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   rembraces(string);
   
   return 0;
}
