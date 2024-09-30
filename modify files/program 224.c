#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void create()
{
    FILE *arch;
    arch=fopen("archivo4.dat","wb");
    if(arch==NULL)
        exit(1);
    int v1=10,v2=20,v3=30;
    fwrite(&v1,sizeof(int),1,arch);
    fwrite(&v2,sizeof(int),1,arch);
    fwrite(&v3,sizeof(int),1,arch);
    fclose(arch);
}

void modify()
{
    FILE *arch;
    arch=fopen("archivo4.dat","r+b");
    if(arch==NULL)
        exit(1);
    fseek(arch,4,SEEK_SET);
    int x=100;
    fwrite(&x,sizeof(int),1,arch);
    fclose(arch);
}

void print()
{
    FILE *arch;
    arch=fopen("archivo4.dat","rb");
    if(arch==NULL)
        exit(1);
    int v1,v2,v3;
    fread(&v1,sizeof(int),1,arch);
    printf("First Integer: %i\n",v1);
    fread(&v2,sizeof(int),1,arch);
    printf("Second Integer: %i\n",v2);
    fread(&v3,sizeof(int),1,arch);
    printf("Third Integer: %i\n\n",v3);
    fclose(arch);
}


int main()
{
    create();
    print();
    modify();
    print();
    getch();
    return 0;
}


