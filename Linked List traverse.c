#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

int main()
{int choice=1;
    struct node *head, *newnode, *temp;
    head=0;

while(choice!=0)
{
    newnode= (struct node*)malloc(sizeof(struct node));
   // printf("Enter the data : ");
    //scanf("%d" ,&newnode->data);
    newnode->data = 5 ;
    newnode->next=0;

    if(head==0)
        head=temp=newnode;
    else
        {temp->next=newnode;
    temp=newnode;}

printf("do you want to continue ?\n1)Yes\n0)No\n");
 scanf("%d" ,&choice);
}

/*printf("Values are : ");
temp=head;
while(temp!=0)
{printf("%d " ,temp->data);
temp=temp->next;
}*/
    return 0;
}
