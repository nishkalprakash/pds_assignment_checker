/*
  Section 14
  Roll no : 22AG30008
  Name : Bhavesh Nitin Bhadane 
  Assignment no -3
  Program to check points
*/
  

#include<stdio.h>
#include<math.h>
int main ()
{
  int ss,mm,hh ;
  scanf("%d %d %d",&hh,&mm,&ss);
  if(hh<=24 && mm<=60 && ss<=60)
  printf("%d %d %d",hh ,mm,ss);
  printf("The valid time is %d:%d:%d",hh,mm,ss);
  
   if(hh>24 || mm>60 || ss>60)
  printf("The time is invalid");
  return 0;
}

