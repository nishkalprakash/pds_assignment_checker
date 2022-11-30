//SEC:14
//ROLL NUMBER:22EC10039
//NAME:DEDEEPYA
//ASSIGNMENT:4
//DESCRIPTION:PROGRAM TO CHECK POINTS

#include<stdio.h>
int main()
{
  int num,sum=0,rem;
  printf("ENTER YOUR NUMBER:");
  scanf("%d",&num);

 if(num<=0)
{
  num=-num;
    while(num>0)
    {rem=num%10;
    sum=sum+rem;
    num=num/10;}
    sum=-sum;
}
 while(num>0)
  {rem=num%10;
    sum=sum+rem;
    num=num/10;}
  printf("your sum is:%d\n",sum);


  return 0;
}
   

