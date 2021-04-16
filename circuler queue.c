#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int front = -1, rear = -1;
int queue[maxsize],choice=1;


void insert()
{
    int item;
    printf("\nEnter the element");
    scanf("%d",&item);
    
    if(front==-1 && rear== -1)
    {
    
        rear=front=0;
        queue[rear]=item;
    }
    else if (((rear+1)%maxsize)==front)
    {
        printf("\nQueue is full");
    }
    else
    {
        rear=(rear+1)%maxsize;
        queue[rear]=item;
    }
}
  
void delete()
{
    if(front==-1 && rear==-1)
    {
        printf("\nQueue is empty");
    }
    else if (rear==front)
    {
        rear=front=-1;
    }
    else
    {
        printf("\n%d",queue[front]);
        front=(front+1)%maxsize;
    }
}

void display()
{
    int i=front;
    printf("\nQueue is:");
    while (i!=rear)
    {
        printf("%d",queue[i]);
        i=(i+1)%maxsize;
    }
    printf("%d",queue[rear]);
}

int main ()
{

        
        while(choice<4 && choice!=0)
        {
            printf("\n1.insert an element\n2.Delete an element\n3.Display the queue\n");
            printf("\nEnter your choice ?");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:
                insert();
                break;
                case 2:
                delete();
                break;
                case 3:
                display();
                break;
                
            }
        }
}
