#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
        printf("\nOverflow");
    else  if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }

}

void dequeue()
{if (front==-1 && rear==-1)
    {
printf("\nUnderflow");
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
        front++;

}

int main()
{int i;
    enqueue(5);
    enqueue(-10);
    enqueue(0);
    dequeue();
    dequeue();
    enqueue(23);
    enqueue(34);
    enqueue(11);
    dequeue();
    enqueue(4);
    enqueue(11);

    printf("\nRemaining values in queue :");
    for(i=front; i<=rear; i++)
        printf("%d " ,queue[i]);

}
