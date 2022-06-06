#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m;
    printf("row? : ");
    scanf("%d",&m);
    printf("col? : ");
    scanf("%d",&n);
    int mat[m][n];
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {   
           int temp;
            printf("enter %d %d value: ",i,j);
            scanf("%d",&temp);
            mat[i][j] = temp;
       }
       
    }
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {   
            printf("%d ",mat[i][j]);
            if(i%2 == 0 && (i+j)%2 == 0){
                sum += mat[i][j];
            }
            else if(i%2 != 0 && (i+j)%2 == 0 ){
                sum += mat[i][j];
            }
       }
       printf("\n");
    }
    printf("sum is : %d\n ",sum);

    
    return 0;
}
