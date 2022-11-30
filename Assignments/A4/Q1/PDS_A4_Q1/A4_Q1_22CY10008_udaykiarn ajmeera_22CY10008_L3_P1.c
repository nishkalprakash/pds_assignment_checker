#include<stdio.h>
 
 int main()
{
 int n,i;
 printf("enter any interger from-999999 to 999999 ");
 scanf("%d",&n);
 if(n<=999999 && n>=-999999)
 {
  if(n<0 && n>-999999){
n = n*-1;
}
   for(i=1;i<=n;i++)
  {if(n%i==0)
    printf("%d\t",i);
  
  }

  if (n==0)
  printf("%d",n);
  }
 
  return 0;
}
 

