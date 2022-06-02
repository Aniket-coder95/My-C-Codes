#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned char cData=0xFd;
    int iPos =0;
    printf("Initially cData = 0x%x\n\n",cData);
    printf("Enter the position which you want clear = ");
    scanf("%d",&iPos);
    //clear the nth bit.
    cData ^= (1<<iPos);
    //Print the data
    printf("\n\n%dth Bit clear Now cData will be = 0x%x\n",iPos,cData);
    return 0;
}