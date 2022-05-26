#include<stdio.h>

int main()
{
    int sign =0 ;
    int data = 0;
    printf("enter number to check its sign:\n");
    scanf("%d",&data);
    sign  = (data>0)  -  (data<0) ; 
    if (sign == 1)
    {
        printf("Entered number is a positve number\n");
    }else if (sign == -1)
    {
        printf("Entered number is a negative number\n");
    }else{
        printf("Entered number is zero\n");
    }

    return 0;
}
