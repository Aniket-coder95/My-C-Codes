#include <stdio.h>
#include <string.h>

void rotate(int len){
    int arr[len];
    
    int x[7] = {1,3,5,8,0,2,6};
    int size = 7;
    printf("initial array is: \n");
    for(int i=0 ; i<size ;i++ ){
        printf("%d ",x[i]);
    }
    printf("\n");
    

    for(int i=0 ; i<len ; i++){
        arr[i] = x[i];
    }
    

    for(int i=0 ; i<size-len ;i++ ){
        x[i] = x[i+len];
    }
    for(int i=size-len,j=0 ; i<size && j<len;i++ , j++ ){
        x[i] = arr[j];
    }
    printf("array after change \n");
    for(int i=0 ; i<size ;i++ ){
        printf("%d ",x[i]);
    }
}
int main()
{
    printf("enter length to ratate array!");
    int y = 0;
    scanf("%d",&y);
    
    rotate(y);
    return 0;
}
