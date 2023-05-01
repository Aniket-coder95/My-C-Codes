
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Max 100

void printalpha(char* str){
	char string[Max];
	int len = strlen(str)-1,i, sum=0;
	
	for(i=0 ; i<len ; i++){
		char num[5] ={};
		int j=0;
		while( str[i] >= 48 && str[i] <=57 ){
			num[j++] = str[i];
			i++;
		}
		str[j]='\0';
		// printf("Sum:- %d \n", atoi(num));
		sum = sum + atoi(num);
		
		
	}
	printf("Final Sum:- %d \n", sum);

}

int main (void) {
   char string[Max];
   printf("Please enter the string: ");
   fgets(string , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   printalpha(string);
   
   return 0;
}
