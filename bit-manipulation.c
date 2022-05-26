#include <stdio.h>

int main()
{
    
    int num=200,num1 = 3, i;
    for (i=0; i<=8; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=8; ++i) 
        printf("Left shift by %d: %d\n", i, num1<<i);    
    
     return 0;
    return 0;
}
