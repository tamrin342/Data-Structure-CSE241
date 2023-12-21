#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newnode,*top=0;
void push(int x)
{
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}

void pop()
{
    if(top==0)
        printf("Underflow");
    else
        top=top->next;
}
int main()
{
    struct node *temp;
    push(5);
    push(6);
    push(8);
    pop();

    temp = top;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}
