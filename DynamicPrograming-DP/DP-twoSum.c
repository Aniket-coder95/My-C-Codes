#include<stdio.h>


int subsetsum(int arr[] , int n , int sum){
    int subset[n+1][sum+1];

    for (int i = 0; i <= n; i++)
    {
        subset[i][0] = 1;
    }
    for (int i = 1; i <= sum; i++)
    {
        subset[0][i]=0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= sum ; j++)
        {
            if (j<arr[i-1])
            {
                subset[i][j] = subset[i-1][j];
            }
            if (j>=arr[i-1])
            {
                subset[i][j]= subset[i-1][j] || subset[i-1][j-arr[i-1]] ;
            }
        }
    }
    return subset[n][sum];
}

int main()
{
    int arr[] = {1,4,7,9,4,6};
    int target = 131;
    int n = sizeof(arr)/sizeof(arr[0]);
    if (subsetsum(arr , n , target))
    {
        printf("subset sum found");
    }else
    {
        printf("subset sum not found");
    }
    
    
    return 0;
}
