#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node getnode();
void traverse(struct node *q);
void main()
{
    struct node *start,*p ;
    p=getnode();
    start=p;
    if(p==NULL)
    {
        printf("memroy allocation unsuccessfull");
        exit(0);
    }
    printf("enter the information in the node" );
    scanf("%d",&p->info);
    traverse(&start);
    getch(); 
}

struct node getnode()
{
    struct node *p;
    p= (struct node)malloc((sizeof) struct node);
    return(p);
}





























