#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int n,i,a=0,b=1,s;
  printf("enter the number of elements");
  scanf("%d",&n);
  if (n==0)
  {
    printf("%d",a);
  }
  if(n==1)
  {
    printf("%d",b);
  }
  else
  {
    printf("%d%d",a,b);  
    for(i=2;i<n;i++)
    {
      s=a+b;
      a=b;
      b=s;
      printf("%d",s);
    }
  }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}