// C Program to Print Numbers Except Multiples of n


#include <stdio.h>
int main()
{
    int n;
    printf("enter your number(n) : ");
    scanf("%d",&n);
    int y=1;
    while (y<50)
    {
        if(y%n != 0){
            printf("%d ",y);
        }
        y++;
        
    }
    
    return 0;
}
