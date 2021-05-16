#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

//create a node//
struct node *CreateNode(int data)
{
    struct node *NewNode=(struct node*)malloc(sizeof(struct node));
    NewNode->data = data;
    NewNode->left=NewNode->right=NULL;
    
    return NewNode;
}

//INSERTATION//
void insert(int data)
{
    struct node *NewnNode = CreateNode(data);
    if(root == NULL)
    {
        root = NewnNode;
        return;
    }
    
    else
    {
        struct node *current =root, *parent=NULL;
        
        while (true)
        {
            parent=current;
            
            if(data<current->data)
            {
                current=current->left;
                if(current==NULL)
                {
                    parent->left=NewnNode;
                    return;
                }
            }
            else
            {
                current=current->right;
                if(current==NULL)
                {
                    parent->right=NewnNode;
                    return;
                }
            }
        }
    }
}

//Find inorder successor//
struct node *minValueNode(struct node *node)
{
    struct node *current=node;
    while(current && current->left != NULL)
        current = current->left;
    
    return current;
}


//DELETING NOADE//
struct node *delete(struct node *root,int key)
{
    if(root == NULL)
        return root;
    //find root to be deleted
    if(key<root->data)
        root->left = delete(root->left,key);
    else if(key>root->data)
        root->right = delete(root->right,key);
    
    else
    {
        //with one child or no child//
     if(root->left == NULL)
     {
         struct node *temp = root->right;
         free(root);
         return temp;
     }
     else if(root->right == NULL)
     {
         struct node *temp = root->left;
         free(root);
         return temp;
     }
        //with two child//
        
        struct node *temp =minValueNode(root->right);
        
        root->data = temp->data;
        
        root->right = delete(root->right, temp->data);
    }
        
     return root;
}


//DISPLAY//
void inorderTraversal(struct node *node)
{
    if(root==NULL)
    {
        printf("The tree is empty\n");
        return;
    }
    else
    {
        if(node->left!=NULL)
            inorderTraversal(node->left);
        printf("%d \n",node->data);
        
        if(node->right!=NULL)
            inorderTraversal(node->right);
    }
    
}

int main()
{
    insert(50);
    insert(30);
    insert(70);
    insert(60);
    insert(10);
    insert(90);

    printf("Binary search tree : \n");
    inorderTraversal(root);
    
    printf("After deleting 10 \n");
    root = delete(root, 10);
    inorderTraversal(root);

}
