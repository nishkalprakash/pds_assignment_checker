/*Sec        :14
Name       :Tejasree sai
Roll no    : 22CS10009
Assignment :4
Description:Finding factors*/


#include<stdio.h>
int main ()
{
 int num,count,x;
 printf("Enter your number:\n");
 scanf("%d",&num);
 count=1;
 while(count<=num)
  {
    x=num%count;                     //rem=0 indicates it is a factor
    if(x==0)
      {printf("%d is a factor of %d\n",count,num);}
    count++;
    
  }
 return 0;
}
