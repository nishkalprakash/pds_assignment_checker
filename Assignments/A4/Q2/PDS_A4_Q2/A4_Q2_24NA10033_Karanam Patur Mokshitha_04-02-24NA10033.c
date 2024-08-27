#include<stdio.h>
int main () {
  double max=0.0,next,secondmax;
  printf("Enter the numbers and the sequence stops when you use negative number\n");
  scanf("%lf",&next);
  while(next>0)  {
   if (max<next)  {
   max=next;
   scanf("%lf",&next);  }
   if(secondmax>max)  {
   secondmax=max;
   scanf("%lf",&max);}
   else{
   printf("Value not yet entered");}
   }
   printf("Largest number:%lf",max);
   printf("Second largest number:%lf",secondmax);
   return 0;
   }
   
    
    
   
