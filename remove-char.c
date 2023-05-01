#include<stdio.h>
#include<string.h>

void check(char string[] ,char ch)
{
	int len = strlen(string);

	char new[len+1];
	// char new[] = ""; it will give error *segmentation error*
	int j=0;
	for(int i=0; i<len ; i++)
	{
		if(string[i] != ch){
			new[j] = string[i];
			j++;
		}
	}

	new[j] = '\0';
	printf("%s\n",new );
}
int main(int argc, char const *argv[])
{
	
	char string[] = "kumaraniket";
	char ch = 'j';
	check(string , ch);
	return 0;
}