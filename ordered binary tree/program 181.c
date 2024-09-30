#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *left;
    struct node *right;
};

struct node *root=NULL;

 int exist(int x)
 {
    struct node *reco=root;
    while(reco!=NULL)
    {
        if(x==reco->info)
            return 1;
        else
            if(x>reco->info)
            reco=reco->right;
        else
            reco=reco->left;
    }
    return 0;
 }

void insert(int x)
{
    if(!exist(x))
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

void deleteNode(struct node *reco)
{
    if(reco!=NULL)
    {
        deleteNode(reco->left);
        deleteNode(reco->right);
        free(reco);
    }
}

void amount(struct node *reco,int *cant)
{
    if(reco!=NULL)
    {
        (*cant)++;
        amount(reco->left,cant);
        amount(reco->right,cant);
    }
}

void amountHojas(struct node *reco,int *cant)
{
    if(reco!=NULL)
    {
        if(reco->left==NULL && reco->right==NULL)
            (*cant)++;
        amountHojas(reco->left,cant);
        amountHojas(reco->right,cant);
    }
}

void printEntreConNivel(struct node *reco,int nivel)
{
    if(reco!=NULL)
    {
        printEntreConNivel(reco->left,nivel+1);
        printf("%i(%i) ",reco->info,nivel);
        printEntreConNivel(reco->right,nivel+1);
    }
}

void retornarAltura(struct node *reco,int nivel,int *altura)
{
    if(reco!=NULL)
    {
        retornarAltura(reco->left,nivel+1,altura);
        if(nivel>*altura)
            *altura=nivel;
        retornarAltura(reco->right,nivel+1,altura);
    }
}

void mayorValor()
{
    if(root!=NULL)
    {
        struct node *reco=root;
        while(reco->right!=NULL)
            reco=reco->right;
        printf("Mayor valor del arbol es: %i\n",reco->info);
    }
}

void deleteMenor()
{
    if(root!=NULL)
    {
        struct node *del;
        if(root->left==NULL)
        {
            del=root;
            root=root->right;
            free(del);
        }
        else
        {
            struct node *atras=root;
            struct node *reco=root->left;
            while(reco->left!=NULL)
            {
                atras=reco;
                reco=reco->left;
            }
            atras->left=reco->right;
            free(reco);
        }
    }
}

int main()
{
    int canti=0;
    int cantiHojas=0;
    int altura=0;
    insert(50);
    insert(25);
    insert(70);
    insert(8);
    insert(30);
    printf("Tree listing in entreorder\n");
    printEntreOrder(root);
    printf("\n");
    amount(root,&canti);
    printf("Number of nodes in the tree is: %i\n",canti);
    amountHojas(root,&cantiHojas);
    printf("Number of hojas in the tree is: %i\n",cantiHojas);
    printf("Impresion entre orden junto con el nivel\n");
    printEntreConNivel(root,1);
    printf("\n");
    retornarAltura(root,1,&altura);
    printf("Altura del arbol: %i\n",altura);
    mayorValor();
    deleteMenor();
    printf("Tree listing in entreorder despues de borrar menor\n");
    printEntreOrder(root);
    deleteNode(root);
    getch();
    return 0;
}


