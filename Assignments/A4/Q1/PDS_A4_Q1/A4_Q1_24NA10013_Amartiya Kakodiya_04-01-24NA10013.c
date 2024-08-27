//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//program that takes the positive integer n and displays the first n terms of the following series:1,-1,2,-3,5,-8,13,-21......
#include<stdio.h>
int main()
{ 
   int a=0,b=1,c,n;
   printf("enter number n:");
   scanf("%d",&n);
   if(n==0 || n<0)
{   
    printf("N is invalid");
    return 0;
} 
   printf("%d",b);
   printf(",");
   int i;
   for(i=1;i<=n-1;i++)
{  
        c=a+b;
        a=b;
        b=c;
 if(i%2==0)
 {
      printf("%d",c);
      
 }
 else
    printf("%d",c*(-1));
     printf(",");
 }
     return 0;
}
