#include<stdio.h>
#define N 5
int deque[N];
int front=-1,rear=-1;

void enquefront(int x)
{
    if((front==0 && rear==N-1)||(front==rear+1))
    {
    printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[front]=x;
    }
    else if(front==0)
    {
        front=N-1;
        deque[front]=x;
    }
    else
    {
        front--;
        deque[front]=x;
    }
}

void enquerear(int x)
{
   if((front==0 && rear==N-1)||(front==rear+1))
    {
    printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        deque[rear]=x;
    }
    else if(rear==N-1)
    {
        rear=0;
        deque[rear]=x;
    }
    else
    {
        rear++;
        deque[rear]=x;
    }
}

void display()
{
    int i=front;
    printf("\nElements in queue:");
    while (i!=rear)
    {
        printf("%d",deque[i]);
        i=(i+1)%N;
    }
    printf("%d",deque[rear]);
    
}

void dequefront()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if(front==N-1)
    {
        printf("\nThe deleted element is:%d",deque[front]);
        front=0;
    }
    else
    {
        printf("\nThe deleted element is:%d",deque[front]);
        front++;
    }
}

void dequerear()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else if(rear==0)
    {
        printf("\nThe deleted element is:%d",deque[rear]);
        rear=N-1;
    }
    else
    {
        printf("\nThe deleted element is:%d",deque[rear]);
        rear--;
    }
}

int main()
{
 enquefront(2);
 enquefront(1);
 enquerear(3);
 enquerear(5);
 enquerear(8);
 display();
 dequefront();
 dequerear();
 display();

 return 0;
}


