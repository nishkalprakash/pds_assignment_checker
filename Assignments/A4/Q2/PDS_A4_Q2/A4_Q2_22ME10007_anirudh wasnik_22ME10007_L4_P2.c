
#include<stdio.h>
int main()
{
int a,b,n;
printf("enter number");
scanf("%d",&a);
n=0;


while(a!=0){
           
           n=n+(a%10);
           a=a/10;
           
           
           }
printf("sum of the number is: %d",n);
return 0;
}

