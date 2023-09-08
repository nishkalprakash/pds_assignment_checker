//Roll No: 23NA30028//
//Name: Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int d,t,f,r;
  printf("Enter distance in km and time in hours");
  scanf("%d%d",&d,&t);
  if(d<=8) f=20;
  else if(8<d && d<=12) f=(d-8)*10+20;
  else if(12<d && d<=16) f=(d-12)*8+60;
  else if(16<d && d<=20) f=(d-16)*6+92;
  else if(d>20) f=(d-20)*5+116;

  if(1<t && t<=12)r=200;
  else if(12<t<=24)r=500;
  else if(t>24)r=500+(t/24)*300;

  printf("Total taxi fare=%d\n",r+f);

  return 0;
}
 
