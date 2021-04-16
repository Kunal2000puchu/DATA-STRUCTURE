#include<stdio.h>
#define size 50
int A[50];
void insert(void);
void delete(void);
void display(void);
int front=-1,rear=-1;

int main()
{
    int num;
    
    do
    {
    
        printf("\n 1 to insert,2 to delete and 3 to display");
        scanf("%d",&num);
        switch (num)

        {
        case 1:
            insert();
            break;

        case 2:
            delete();
            break;

        case 3:
            display();

        }
        printf("enter 1 to reenter the element and 2 to exit");
        scanf("%d",&num);
    }while (num==1);
    
    
    
    
    
}
void insert()
{
    if(rear==size-1)
    {
        printf("\n queue is empty");
        return;
    }


    int item;
    printf("Enter the element");
    scanf("%d",&item);
    if(rear==-1)
    rear=front=0;
    else
    rear++;
    A[rear]=item;
}

void delete()
{
    if(front==-1)
    {
        printf("\n queue is empty");
        return;
    }


    printf("element is to be deleted %d",A[front]);
    if(front==rear)
    front=rear=-1;
    else
    front++;

}

void display()
{
    int i;
    for(i=front;i<=rear;i++)
    printf("%d th element = %d",i+1,A[i]);
}
