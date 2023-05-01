#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
	char str[20] = "kumaraniketf";
	int len = strlen(str);
	if (len % 2 != 0 )
		len = len-1;
	printf("%s\n",str );
	for (int i = 0; i < len; i=i+2)
	{
		char x = ' ';   x = str[i];
		str[i]=str[i+1];  str[i+1] = x;
	}
	printf("%s\n",str );
	return 0;
}