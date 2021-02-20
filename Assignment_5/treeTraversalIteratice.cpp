#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
    int info;
    struct BST *right,*left;
}node;
node *root=NULL,*temp=NULL,*loc=NULL;



void insert()
{
    node *ptr;
    ptr=(node*)malloc(sizeof(node));
    printf("Enter the information : ");
    scanf("%d",&ptr->info);
    if(root==NULL)
    {
        root=ptr;
        ptr->left=NULL;
        ptr->right=NULL;

    }
    else
    {
        temp=root;
        while(temp!=NULL)
        {

            loc=temp;
            if(ptr->info<temp->info)
            {
                temp=temp->left;
            }
            else
            {
                temp=temp->right;
            }
        }
        if(ptr->info<loc->info)
        {
            loc->left=ptr;
            ptr->right=ptr->left=NULL;
        }
        else
        {
            loc->right=ptr;
            ptr->left=NULL;
            ptr->right=NULL;
        }
    }

}



void preorder()
{
    node *stack[10]={};
    int top=1;
    stack[top]=NULL;
    node *ptr=root;
    if(root==NULL)
    {
        printf("Tree is empty !\n");
    }
    while(1)
    {
        while(ptr!=NULL)
        {
            printf("\n %d ",ptr->info);

            top=top+1;
            stack[top]=ptr;
            ptr=ptr->left;

        }
        if(top==1)
        {
            break;
        }
        ptr=stack[top];
        top=top-1;
        ptr=ptr->right;

    }
}



void inorder()
{
    node *ptr,*stack[20],*left,*right;
    int top=1;
    stack[top]=NULL;
    if(root==NULL)
    {
        printf("\n Tree is empty !");
    }
    else
    {
        ptr=root;
        label:
        while(ptr!=NULL)
        {
            top=top+1;
            stack[top]=ptr;
            ptr=ptr->left;
        }
        ptr=stack[top];
        top=top-1;
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->info);
            if(ptr->right!=NULL)
            {
                ptr=ptr->right;
                goto label;
            }
            ptr=stack[top];
            top=top-1;
        }
    }
}



void postorder(node *ptr)
{
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("\n%d",ptr->info);
    }
}

 

void biggest()
{
    node *ptr;
    ptr=root;
    while(ptr->right!=NULL)
    {
        ptr=ptr->right;
    }
    printf("\n Biggest Element is : %d",ptr->info);
}



void smallest()
{
    node *ptr;
    ptr=root;
    while(ptr->left!=NULL)
    {
        ptr=ptr->left;
    }
    printf("\n Smallest Element is : %d",ptr->info);
}



int main()
{
    int a,n,i;
    printf("*--First Node will be ROOT node--*\n");
    printf("Enter the Number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insert();
    }
    while(1)
    {
        printf("\nPress 1 to insert : \n");
        printf("Press 2 for Preorder traversal:");
        printf("\nPress 3 for Postorder traversal:");
        printf("\nPress 4 for Inorder Traversal:");
        printf("\nPress 5 for smallest info in tree:");
        printf("\nPress 6 for largest info in tree:");
        printf("\nPress 7 to exit:");
        printf("\nEnter your choice : ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            {
                insert();
                break;
            }
        case 2:
            {
                preorder();
                break;
            }
        case 3:
            {
                postorder(root);
                break;
            }
        case 4:
            {
                inorder();
                break;

            }
        case 5:
            {
                smallest();
                break;
            }
        case 6:
            {
                biggest();
                break;
            }
        case 7:
            {
                return 0;
            }
        }
    }
}