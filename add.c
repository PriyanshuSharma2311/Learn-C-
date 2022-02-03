#include<stdio.h>
int addDigitByDigit(int,int,int); 
int main()
{
  int a,b,c;
  scanf("%d %d %d",&a,&b,&c);
  int sum;
  sum=addDigitByDigit(a,b,c);
  printf("%d",sum);
  return 0;
}
int addDigitByDigit(int a,int b,int c){
  // Write your code here
  long sum;
  sum= a+b+c;
  return(sum);
}