#include<stdio.h>
#include<conio.h>
int main ()
{
    int a[10],i,l,v;
    printf("enter array element\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("entered array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("enter v and l\n");
    scanf("%d%d",&v,&l);
    for(i=9;i>=l;i--)
    {
        a[i+1]=a[i];
        a[l]=v;
    }
    printf("updated array\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
    






























































