  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define Max 100

void sort(char* str){
	int len = strlen(str)-1,i,j;
	for(i=0 ; i<(len-1) ; i++){
		for (j =i+1; j < len; j++)
		{
			if(str[i] > str[j]){
				char t = str[i];
				str[i] = str[j];
				str[j] = t;
  			}
		}
	}

}

void anagram(char* str1, char* str2){
	sort(str1);
	sort(str2);
	if(!strcmp(str1,str2))
		printf("anagram");
	else
		printf("not anagram");

}

int main (void) {
   char str1[Max], str2[Max];
   printf("Please enter the string1: ");
   fgets(str1 , Max ,stdin);
   printf("Please enter the string2: ");
   fgets(str2 , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   // strncpy(str1,str2,2);
   // printf("%s\n",str1 );

   anagram(str1, str2);
   
   return 0;
}
