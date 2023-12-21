#include<stdio.h>
#define N 5

void quicksort(int arr[],int first,int last)
{
    int i,j,pivot,temp ;
    if(first<last)
    {
        pivot = first ;
        i = first ;
        j = last ;
        while(i<j)
        {
            while(arr[i]<=arr[pivot] )
                i++ ;
            while(arr[j]>arr[pivot])
                j-- ;
            if(i<j)
            {
                arr[i] = arr[i] + arr[j] ;
                arr[j] = arr[i] - arr[j] ;
                arr[i] = arr[i] - arr[j] ;
            }
        }
        temp = arr[pivot] ;
        arr[pivot] = arr[j] ;
        arr[j] = temp ;

        quicksort(arr,first,j-1);
        quicksort(arr,j+1,last);
    }
}

int main()
{
    int i , arr[N] ;

    printf("Enter the values :");
    for(i=0; i<N; i++)
    scanf("%d",&arr[i]);

    quicksort(arr,0,N-1);

    printf("Array after sorting :");
    for(i=0; i<N; i++)
        printf("%d ",arr[i]);

    return 0;
}
