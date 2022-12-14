//Program to print all armstrong numbers below given input
#include <stdio.h>
#include <math.h>
int main()
{
   int n,sum,i=1,l,t;
   scanf("%d",&n);
   int len(int);
   if (n==0 || n<0) printf("\nInvalid output\n");
   for (i=1,sum=0;i<=n;i++){
         l=len(i);t=i;
         while (t!=0){
            sum=sum+pow(t%10,l); t=t/10;}
         if (sum==i) printf("%d ",i);}
   printf("\n");
   return 0;
}
int len(int num)
{
  int j=0;
  while (num!=0) {
    num/10;
    j++;}
  return j;
}
