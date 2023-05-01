#include <stdio.h>

void vowel(char *ch)
{
	int x=0;
	char c = *ch;
	char lower_case = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	char upper_case = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	if( lower_case || upper_case){
		printf("this is an Vowel\n");
		printf("*********************************\n");
	}else{
		printf("this is a Consonent\n");
		printf("*********************************\n");
	}

}

int main(int argc, char const *argv[])
{
	int check = 0;
	while(!check){
		char c, stop;
		printf("input : ");
		scanf("%c",&c);
		
		vowel(&c);

		printf("To continue press ENTER\n");
		printf("To exit press E and ENTER ");
		scanf("%s",&stop);
		if(stop == 'e' || stop == 'E'){
			return 0;
		}
	}
}
