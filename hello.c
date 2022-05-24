#include <stdio.h>
int fun(int , int);
void main()
{
    int a = 10;
    int b = 20;
    int x =  fun(a,b);
    printf("%d" , x);
    
    
}

int fun(int x , int y){
    int z = x + y;
    printf("hello im your fun function \n");
    return z;
}