#include<stdio.h>
#include<string.h>
#define N 5
int arr[N] ;

int binarysearch(int val)
{
    if(val<2)
        return val ;
    int lb = 1, ub = val ;

    while(lb<=ub)
    {
        int mid = (lb+ub)/2 ;
        if(val==mid*mid)
            return mid ;

        else if(val>mid*mid)
            lb = mid+1 ;
        else
            ub = mid-1 ;
    }
    return ub ;
}

int main()
{
    int i,value ;
    //printf("\nEnter the elements  : ");
  //  for(i=0; i<N; i++)
     //   scanf("%d",&arr[i]);
    printf("Enter the value you want to search : ");
    scanf("%d",&value);

    int position = binarysearch(value);

    //  if(position != -1)
    printf("\nThe element is found at index %d ",position);
   //else
     //    printf("\nThe element is not found");

    return 0 ;
}

