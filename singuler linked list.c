#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *root;

void insertbeg()
{
    int item;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the item you want to insert:");
    scanf("%d",&item);
    p->data = item;
    p->link = NULL;
    if(root == NULL)
        root = p;
    else
    {
        p->link = root;
        root = p;
    }
}


void append()
{
    int item;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the item you want to insert:");
    scanf("%d", &item);
    p->data = item;
    p->link = NULL;
    if (root == NULL)
    {
        root = p;
    }
    else
    {
        struct node *q;
        q = root;
        while (q->link != NULL)
            q = q->link;
            q->link = p;
    }
}


void insertpos()
{
    int item,pos,i;
    struct node *p,*q;
    p = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter the item you want to insert:");
    scanf("%d",&item);
    printf("\nEnter the Position at which you want to insert:");
    scanf("%d",&pos);
    p->data = item;
    p->link = NULL;
    if(root == NULL)
        root = p;
    else if(pos == 0)
    {
        p->link = root;
        root = p;
    }
    else
    {
        q = root;
        for(i = 0 ; i<pos ; i++)
        {
            q=q->link;
        }
        p->link = q->link;
        q->link = p;
    }
}

void insertunsorted()
{
    int ch;
    printf("\n  Insert:\n\n\t1.Beginning\n\n\t2.random\n\n\t3.Position\n\n\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 : insertbeg();
                 break;

        case 2 : append();
                 break;

        case 3 : insertpos();
                 break;

        default : printf("\nINVALID CHOICE!!!");
    }
}

void display()
{
    struct node *k;
    if (root == NULL)
    {
        printf("\n The list is empty!!");
        return;
    }
    else
    {
        k = root;
        while (k != NULL)
        {
            printf("%d\n", k->data);
            k = k->link;
        }
    }
}

void deletebeg()
{
    struct node *p;
    if(root == NULL)
    {
        printf("\nThe list is empty!!");
    }
    else
    {
        p = root;
        root = p->link;
        free(p);
        printf("\n After deleting the begining....\n");
    }
}

void deleteend()
{
    struct node *p,*q = NULL;
    if(root == NULL)
    {
        printf("\n List is empty!!");
    }
    else if(root->link == NULL)
    {
        root = NULL;
        free(root);
        printf("\n Only one node is deleted..");
    }
    else
    {
        p = root;
        while(p->link != NULL)
        {
            q = p;
            p = p->link;
        }
        q->link = NULL;
        printf("\nNode is deleted from the last..");
    }
}

void deletepos()
{
    int pos,i;
    struct node *p = NULL,*q;
    printf("\nEnter the Position at which you want to insert:");
    scanf("%d",&pos);
    if(root == NULL)
        printf("\nUNDERFLOW!!!");
    q = root;
    if(pos == 0)
         root = root->link;
    else
    {
        for(i=0;i<pos;i++)
        {
            p = q;
            q = q->link;
        }
        p->link = q->link;
    }
    free(q);
}


void deleteunsorted()
{
    int ch;
    printf("\n From where would you like to Delete:\n\n\t1.Beginning\n\n\t2.Ending\n\n\t3.Position\n\n\tEnter Your Choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1 :  deletebeg();
                       break;

        case 2 :  deleteend();
                       break;

        case 3 : deletepos();
                       break;

        default : printf("\nINVALID CHOICE!!!");
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1.Insert into unsorted\n\n2.Delete from unsorted\n\n3.display\n\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
            {
                case 1 : insertunsorted();
                        break;
                    
                case 2 : deleteunsorted();
                        break;
        
                case 3 : display();
                        break;
                
                default: printf("INVALID CHOICE!!!");

            }
    }
}
