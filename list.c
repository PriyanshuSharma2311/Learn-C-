#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node * next ;
};
struct node* getnode();
// void insert(struct node *q)
// void insert_beg(struct node **);
void traverse(struct node *);
void main ()
{
    struct node *start,*p;
    p=getnode();
    if(p==NULL)
    {
        printf("memroy allocation unsuccessfull");
        exit(0);
    }
    start=p;
    // start=NULL;
    printf("enter the information in the node");
    scanf("%d",&p->info);
    // void insert(start);
    traverse(start);     
}

struct node* getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node ));
    return(p);
}
void traverse(struct node*q)
{
    struct node *p;
    p=q;
    if(p==NULL)
    {
        printf("Empty linked list");
    }
    while(p->next!=NULL)
    {
        printf("%d" ,p->info);
        p=p->next;
    }
    // free(p);
}