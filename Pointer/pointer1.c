#include <stdio.h>

int func(int* a , int n){
    if(n<=0 ) return 0;
    if((*a) % 2 == 0){
        
        return (*a)+func(a+1  ,n-1);
    }else{
        return (*a)-func(a+1  ,n-1);
    }
}

int main(){
    int a[6] = {12,7,13,4,11,6};
    printf("%d\n", func(a,6));
    return 0;
}