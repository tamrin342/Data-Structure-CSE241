#include<stdio.h>
#define N 5

void searching(int arr[],int value)
{
    int pos = -1,i ;
    for(i=1; i<N; i++)
    {
        if(value == arr[i])
        {
            printf("\nThe element is found at position %d ",i+1);
            pos++ ;
        }
    }
    if(pos == -1)
        printf("\nThe element is not found ! ");
}
int main()
{
    int arr[N], i,el;

    printf("\nEnter the values : ");
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);

    printf("\nEnter the element you want to search : ");
    scanf("%d",&el);

    searching(arr,el);

    return 0;
}
