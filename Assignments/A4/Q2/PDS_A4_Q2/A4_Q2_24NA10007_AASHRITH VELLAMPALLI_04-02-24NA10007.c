#include<stdio.h>
int main(){
int i,max=0,smax=0,num,num1=0;
 
  printf("enter number");
  scanf("%d",&num);
  if(num>=0)
  {
  printf("largest number:%d\n",num);
  printf("second largest number: value not entered\n");
  printf("enter numbers\n");
     do 
     {
      scanf("%d",&num1);
      if(num1>max)
      max=num1;
      if((num1<max) && (num1>smax))
      {smax=num1;}
      printf("largest number:%d\n",max);
      printf("second largest number:%d\n",smax);
     }
             
      while(num1>=0);
     
      
  }
 return(0);
 }
