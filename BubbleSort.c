#include<stdio.h>
#define N 5

int swap(int *a, int *b)
{
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;
}
int bubblesort(int arr[])
{
    int i, j, temp ;
    for(i=0; i<N; i++)
    {
        for(j=0; j<N-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]) ;
            }
        }
    }
}
int main()
{
    int i,arr[N] ;
    printf("Enter the values :");
    for(i=0; i<N; i++)
        scanf("%d",&arr[i]);

    int a =  bubblesort(arr);

    if(a != 0)
    {
        printf("\n\nArray after sorting :");
        for(i=0; i<N; i++)
            printf("%d  ",arr[i]);
    }

    return 0;
}
