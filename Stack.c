#include<stdio.h>
#define N 5
int stack[N] ;
int top = -1 ;

void push(int x)
{
    if(top==N-1)
        printf("Underflow");
    else
    {
        top++ ;
        stack[top] = x ;
    }
}
void pop()
{
    if(top==-1)
        printf("Underflow");
    else
        top-- ;
}
void peek()
{
    if(top == -1)
        printf("stack is empty");
    else
        printf("%d",stack[top]);
}
void isempty()
{
    if(top == -1)
        printf("True");
    else
        printf("false");
}
int main()
{
    int i ;
    isempty() ;
    push(6);
    push(4);
    pop();
    peek();
    push(5);

    for(i=0; i<=top; i++)
        printf("%d ",stack[i]);

    return 0;
}
