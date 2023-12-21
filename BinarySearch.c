#include<stdio.h>
#define N 5

int binarysearch(int arr[],int x)
{
    int lb = 0 , ub = N-1 ;
    while(lb<=ub)
    {
        int mid = (lb+ub)/2  ;

    if(x==arr[mid])
        return mid ;

    else if(x<arr[mid])
        ub = mid-1 ;

    else
        lb = mid+1 ;
    }
    return -1 ;
}
int main()
{
    int i,value,arr[N];
    printf("\nenter the values :");
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);
    printf("\nEnter the value you want to search : ");
    scanf("%d",&value);

    int result = binarysearch(arr,value);

    if(result == -1)
        printf("\nOops! Element is not found !\n");
    else
    printf("\nThe element is at index number %d",result);

    return 0 ;
}
