// ******************* Checking a number is palendrome or not ************************************

#include<stdio.h>
#include<conio.h>
int palendrome(int);
void main()
{
    int n,p;
    printf("enter the number you want to check");
    scanf("%d",&n);
    p=palendrome(n);
    if(p==n)
    {
        printf("number is palendrome");
    }
    else
    {
        printf("number is not palendrome");
    }
    getch();
}
int palendrome(int n)
{
    int i,m,c;
    c=0;
    m=n;
    while(m>0)
    {
     m = m/10;
     c ++;  
    }
    return(c);
}