//Roll No.: 23CE10045
//Name: PRIYANSHU VERMA

#include<stdio.h>
int main ()
{
  int a,n,i;
  printf("Enter positive integer: ");
  scanf("%d",&n);
  a = n;
  if(n<=0)
    {
      printf("Entered no is not positive\n");
      return 0;
    }
  for(i=0;n/10!=0;i++)
    {
      a/=10;
    }
  printf("%d",i);
  return 0;
}
