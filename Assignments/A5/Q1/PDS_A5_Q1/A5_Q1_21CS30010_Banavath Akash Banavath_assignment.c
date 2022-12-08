/*name: banavath akash
roll no: 21CS30010
Assignment 5*/
#include<stdio.h>
#include<math.h>

long int power(int,int);

long int power(int x,int n)
{
  int sum=1;
  for(int i=1;i<=n;i++)
  sum= sum+i;
  return x;
}
int factorial(int m)
{
 int i,temp=1;
 for(i=1;i<=m;i++)
  temp=temp*i;
  return (temp);
}
int main()
{
  int n,x,sum=0;
   scanf("%d%d",&n,&x);
   for(sum=1;sum<=10;sum++)
  sum=1+(x/factorial(1))+((x*x)/factorial(2))+((x*x*x)/factorial(3));

  printf("%d",sum);
  return 0;
}



