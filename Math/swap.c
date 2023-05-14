#include <stdio.h>
void fun(int* x ,int* y){
    int temp  = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int x = 10 , y = 20 ;
    printf("i=%d , j=%d\n", x,y);
    fun(&x,&y);
    printf("i=%d , j=%d\n", x,y);
    return 0;
}
