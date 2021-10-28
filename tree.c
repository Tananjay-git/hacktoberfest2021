#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
   struct node*left;
   struct node*right;
};
struct node *root=NULL;
void insert(int data)
{
    struct node *temp, *new;
    new=(struct node*)malloc(sizeof(struct node));

    new->left= NULL;
    new->data=data;
    new->right=NULL;

    if(root==NULL)
    {
        root=new;
    }
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            if(temp->data>data)
            {
                if(temp->left=NULL)
                {
                    temp->left=new;
                }
                temp=temp->left;
                else 
                if(temp->data<data)
                {
                    if(temp->righ==NULL)
                    {
                        temp->righ=new;
                    }
                    temp=temp->righ;

                }
            }
        }
    }

}
void main()
{
    int n;
    printf("Enter the number to be inserted \n");
    scanf("%d",&n);
    insert(n);
}
