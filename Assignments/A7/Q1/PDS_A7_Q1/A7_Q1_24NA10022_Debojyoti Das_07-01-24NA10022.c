#include<stdio.h>
int power(int x, int n)
{
   int a=1,i;
   for(i=1;i<=n;i++)
      {
         a=a*x;    
      }
    return a;  //computing the x tothe power n
}

int fact( int n)
{
  int b=1,j;
  for(j=1;j<=n;j++)
    {
       b=b*j;
    }
   return b;   //computing the factorial function
  
}
int main()
{
  int x,n,k;
  float sum=1;
  printf(" enter value of X and n:\n");
  scanf("%d%d",&x,&n);
  for(k=1;k<n;k++)
  {
    sum= sum + (float)power(x,k)/fact(k);  //determining the sum of the series
  }
  printf("the value of the series is: %f", sum);
}

  
  
