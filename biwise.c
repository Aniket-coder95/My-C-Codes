#include<stdio.h>
int main()
{
    int x =5;
     x =(x++) + (++x) + (++x);
    printf("%d\n",x);
    return 0;
}
