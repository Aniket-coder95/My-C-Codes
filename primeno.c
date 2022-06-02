#include <stdio.h>

int main()
{
    int n,i,m=0,flag=0;   //It clears the screen.  
    printf("Enter the number to check prime:");      
    scanf("%d",&n);      
    m=n/2;      
    for(i=2;i<=m;i++)      
    {      
        if(n%i==0)      
        {      
            return  printf("Number is not prime\n");      
            //break keyword used to terminate from the loop.  
        }      
    }      
         
    printf("Number is prime/n");      

    return 0;
}
