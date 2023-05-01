  
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define Max 100

void freq(char* str){
	int len = strlen(str) , x=0;
	int freq[len];

	for (int i = 0; i < len-1; ++i)
	{
		if(str[i] == ' ')
			continue;
		int count=1;
		int j;
		for ( j = i+1; j < len-1;)
		{
			if(str[j] == str[i]){
				count++;
				int k;
				for ( k = j; k < len; k++)
				{
					str[k] = str[k+1];
				}
			}else{
				j++;
			}
		}
		if(count)
			printf("freq of %c is : %d\n",str[i],count);
		len = strlen(str);
		// printf("%d\n",x);
	}
}

int main (void) {
   char string[Max];
   printf("Please enter the string: ");
   fgets(string , Max ,stdin);
   // printf("String with braces :- %s \n", string);
   freq(string);
   
   return 0;
}
