#include <stdio.h>
#include <string.h>
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

int main (void) {
   char string[Max];
   printf("Please enter the string : ");
   fgets(string , Max ,stdin);
   printf("String before sorting  - %s \n", string);
   sort(string);
   printf("String after sorting  - %s \n", string);
   return 0;
}
