#include<stdio.h>
int main()
{
  int n,sum,max,max2,a;
  printf("enter the number: \n");
  scanf("%d",&n);

  sum=0;
  max=0;
  for(int i=1;n>0;i++)
    {
      a=n%10;
      n=n/10;

      sum=sum+a;

      if(a>max)
    max=a;

     
    }
 
  printf("sum of digits is:%d\n",sum);#include<stdio.h>
int main()
{
  int n,sum,max,max2,a;
  printf("enter the number: \n");
  scanf("%d",&n);

  sum=0;
  max=0;
  for(int i=1;n>0;i++)
    {
      a=n%10;
      n=n/10;

      sum=sum+a;

      if(a>max)
    max=a;

     
    }
 
  printf("sum of digits is:%d\n",sum);
  printf("largest=%d\n",max);
 

  return 0;
}      
      
      
      
,prod=
  printf("largest=%d\n",max);
 

  return 0;
}      
      
      
      
,prod=