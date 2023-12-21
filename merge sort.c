#include <stdio.h>
#define N 5
int b[N];
int a[N];

void merging(int low, int mid, int high)
{
    int i, j, k;

    for(i = low, j = mid + 1, k = low; i <= mid && j <= high; k++)
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
    }

    while(i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }

    while(j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for(k = low; k <= high; k++)
        a[k] = b[k];
}

void sort(int low, int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high) / 2;
        sort(low, mid);
        sort(mid+1, high);
        merging(low, mid, high);
    }
    else
    {
        return;
    }
}

int main()
{
    int i;
    printf("Enter the values : ");
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("List before sorting\n");

    for(i = 0; i <N; i++)
        printf("%d ", a[i]);
    sort(0,N-1);

    printf("\nList after sorting\n");
    for(i=0; i<N; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
