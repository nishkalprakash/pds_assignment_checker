#include<stdio.h>

int main()
{
 int x,a,b,i,sum;
 printf("Enter a positive integer x:\n");
 scanf("%d",&x);
 
 if(x>0 && x!=0)
 {
 int a=1;
 int b=1;
 int sum=1;
   
 for(int i=2;i<=x;i++){
 sum=(a+b);
 a=b;
 b=sum;
 printf("%d",sum);
 }
 }
 if ((x>0 && i%2==0)){
 for(i=-1;i<=x;==i)
 sum=a-b;
 printf("%d",sum);
 }
 if (x<=0)
 {
 printf("x is an invalid integer \n");
 }
 getchar();
 return 0;
 }
  
