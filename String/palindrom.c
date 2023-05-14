#include <stdio.h>
#include <string.h>
int main()
{
    char str[30],*p1,*p2;
    printf("Enter any string\n");
    fgets(str, sizeof(str), stdin);
    p1=str+strlen(str);
    p2=str;
    p1--;
    while(p1>p2)
    {
        if(*p1==*p2)
        {
            p1--;
            p2++;
        }
        else
        {
            break;
        }
    }
        if(*p2 == *p1 || *p2 == *(p1-1))
        {
            printf(" is a Palindrome\n");
        }
        else
        {
            printf(" is not a Palindrome\n");
        }
    return 0;
}