#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
// Driver code

void swapnibbles(int x){
    int y = (x & 0x0F)<<4 | (x & 0x0F)>>4;
    printf("%d",y);
}

int main()
{
    int x = 10;
    swapnibbles(x);
    return 0;
}