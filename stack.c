#include <stdio.h>
#define N 5
int stack[N];
int top=-1;


void Push()
{
    int x;
    printf("Enter data:\n");
    scanf("%d",&x);
    if(top == N-1)
    {
        printf("overflow\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void Pop()
{
    int item;
    if(top == -1)
    {
        printf("Underflow\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("%d",item);
    }
}

void Display()
{
    int i;
    for ( i = top; i >= 0; i--)
    {
        printf("%d",stack[i]);
    }
}

int main()
{
    int ch;
    do
    {
        printf("Enter choice: 1.Push/ 2.Pop/ 3.Display/\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: Push();
                break;
        case 2: Pop();
                break;
        case 3: Display();
                break;
        default: printf("Invalid choice");
        }
    } while (ch!=0);
}

