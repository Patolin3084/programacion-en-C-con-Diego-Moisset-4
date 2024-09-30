#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *left,*right;
};

struct node *root=NULL;

void insert(int x)
{
    struct node *nuevo;
    nuevo=malloc(sizeof(struct node));
    nuevo->info=x;
    nuevo->left=NULL;
    nuevo->right=NULL;
    if(root==NULL)
        root=nuevo;
    else
    {
        struct node *previus,*reco;
        reco=root;
        while(reco!=NULL)
        {
            previus=reco;
            if(x<reco->info)
                reco=reco->left;
            else
                reco=reco->right;
        }
        if(x<previus->info)
            previus->left=nuevo;
        else
            previus->right=nuevo;
    }

}

void printPreOrder(struct node *reco)
{
    if(reco!=NULL)
    {
        printf("%i ",reco->info);
        printPreOrder(reco->left);
        printPreOrder(reco->right);
    }
}

void printEntreOrder(struct node *reco)
{
    if(reco!=NULL)
    {
        printEntreOrder(reco->left);
        printf("%i ",reco->info);
        printEntreOrder(reco->right);
    }
}

void printPostOrder(struct node *reco)
{
    if(reco!=NULL)
    {
        printPostOrder(reco->left);
        printPostOrder(reco->right);
        printf("%i ",reco->info);
    }
}

void deleteNode(struct node *reco)
{
    if(reco!=NULL)
    {
        deleteNode(reco->left);
        deleteNode(reco->right);
        free(reco);
    }
}

int main()
{
    insert(50);
    insert(25);
    insert(70);
    insert(8);
    insert(30);
    printf("Tree listing in preorder\n");
    printPreOrder(root);
    printf("\n");
    printf("Tree listing in entreorder\n");
    printEntreOrder(root);
    printf("\n");
    printf("Tree listing in postorder\n");
    printPostOrder(root);
    deleteNode(root);
    getch();
    return 0;
}


