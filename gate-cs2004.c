#include <stdio.h>
#include <string.h>

int main()
{
    char p[20] ="string";
    char *s = p;
    int length = (strlen(s));//to see output decrease length
    int i ;
    for(i =0 ; i<length ; i++){
        p[i] = s[length-i];
    }
    printf("%s\n",p); // will print nothing coz of null char
    return 0;
}
