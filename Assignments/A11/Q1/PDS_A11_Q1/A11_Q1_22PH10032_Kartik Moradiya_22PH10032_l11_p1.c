#include<stdio.h>

 float sum(int n){
   if(n==0){
   return 1;
   }else if(n==1){
   return 1;
   }else {  
   return (sum(n-1) + (1.0/n));
   }
 }
 int main()
 {
 
 int n;
 printf("enter the n:");
 scanf("%d",&n);
float f= sum(n);
printf("%f",f);
 return 0;
 }
