#include <stdio.h>
int main()
{
  int x,y,fare1=0,fare2=0,days=0,netfare=0;
  printf("enter the number of kilometers travelled in the taxi");
  scanf("%d",&x);
  printf("enter the number of hours of retaining the taxi");
  scanf("%d", &y);
  if (x>0 && x<=8) 
	fare1=20;
  else if (x>8 && x<=12) 
	fare1= 20 +(10*(x-8));
  else if (x>12 && x<=16) 
        fare1=60 + (8*(x-12));
  else if (x>16 && x<=20) 
	fare1=92+ (6*(x-16));
  else 
	fare1=116+ (5*(x-20));
  if (y<1) 
	fare2=0;
  else if (y>=1 && y<12) 
	fare2=200;
  else if (y>=12 && y<24)
	fare2=500;
  else if (days=y/24) 
	fare2=500 + ((days-1)*300);
  netfare= fare1+fare2;
  printf("total fare=%d",netfare);
  return 0;
}
  
    
