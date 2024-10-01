#include <stdio.h>
//creating the factorial function
int fact(int x)
  {int i,product=1;
  if (x==0)
  {return 1;}
  else
  { for (i=1;i<=x;i++)
    {product=product*i;};
   return product;    
   }}
   //creating the power function
int power(int x,int n)
{int i,pro=1;
  for(i=1;i<=n;i++)
    {pro=x*pro;}
  return pro  ;
    }
   
   int main()
{  
  int x,n,k;
  double sigma=0;
  printf("enter the value of x \n");
  scanf("%d",&x);
  printf("enter the value of n \n");
  scanf("%d",&n);
  //now creating the sum using iteration and calculating sigma 
    for(k=0;k<=n;k++)
       {sigma=sigma+((double)(power(x,k))/(double)(fact(k)))   ;
       }
    printf("the sum of the series is  %le \n",sigma);
  return 0;
 }
