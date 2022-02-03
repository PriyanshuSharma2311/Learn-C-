#include <stdio.h>
/* Include other headers as needed */
void digitadd(int);
int main()
{
  int n,t;
  // printf("enter the number");
  scanf("%d",&t);
  while(t--)
  {
    scanf("%d",&n);
    digitadd(n);
  }
  
  return (0);
}
void digitadd(int n)
{
  int t,sum=0;
  while(n>0)
  {
    t=n%10;
    sum=sum+t;
    n=n/10;
  }
  printf("%d\n",sum);
}
