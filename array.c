#include <stdio.h>
#include <conio.h>
void insert(int loc, int val, int len , int a[]);
void main()
{
    int a[10], i, loc, val,len=9;
    printf("enter the elements in the array\n ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the location and value where you want to insert the element\n");
    scanf("%d%d", &loc, &val);
    insert(loc,val,len,&a[10]);
    getch();
}
void insert(int loc, int val,int len, int a[])
{
    int i;
    for(i=len; i>=loc; i--)
    {
        a[i] = a[i-1];
    }
    a[loc - 1] = val;
    len++;
    printf("updated array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}