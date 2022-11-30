#include<stdio.h>

int main()
{
 int n,s=0;
 printf("enter any integer");
 scanf("%d",&n);

  if(n>=-999999 && n<=999999){
  if(n==0){
  printf("0");
  }
   int a;
   while(n!=0){
   a=n%10;
   n=n/10;
   s=s+a;
  
   }
 printf("%d\t",s);
   return 0;
 }
}
