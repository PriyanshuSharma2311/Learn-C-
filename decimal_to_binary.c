#include<stdio.h>
#include<conio.h>
void binary(long int);
void main()
{
    long int n;
    printf("enter the decimal no");
    scanf("%ld",&n);
    binary(n);
    getch();
}
void binary(long int n)
{
    int a[40],i=0;
    while(n>0)
        {
            a[i]=n%2;
            n=n/2;
            i++;
        }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}