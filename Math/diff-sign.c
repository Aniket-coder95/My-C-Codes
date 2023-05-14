#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int x , y;
    printf("enter first no: ");
    scanf("%d",&x);
    printf("enter second no: ");
    scanf("%d",&y);

    int check = (x^y) < 0 ;  //will return 1 when both have diff sign

    if(check==1){
        printf("x & y have diffrent sign \n");
    }else{
        printf("x & y have same sign \n");
    }
    return 0;
}
