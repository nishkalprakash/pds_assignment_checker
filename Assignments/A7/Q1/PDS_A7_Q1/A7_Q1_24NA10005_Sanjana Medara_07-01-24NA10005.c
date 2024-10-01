#include<stdio.h>
#include<math.h>
int power(int x,int n)
{
 for(int i=0;i<=n;i++)
 power(x,n)==x*i;
 return 0;
 }
int fact(int n)
  {
  for (int j=0;j<n;j++)
  fact(n)==j*n;
  }
int main()
   {
    int sum,x,n;   
    printf("Value of x=");
    scanf("%d",&x);
    printf("Value of n=");
    scanf("%d", &n);
    sum =(float)power(x,n)/fact(n);
    return (sum);
   }
 
    
