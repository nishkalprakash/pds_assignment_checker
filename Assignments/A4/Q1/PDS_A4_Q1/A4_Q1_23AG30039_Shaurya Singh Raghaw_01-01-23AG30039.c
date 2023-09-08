#include<stdio.h>
int main()
{
  int h,d,t;
  printf("enter the number of kilometers for which the taxi was retained: \n");
  scanf("%d",&d);
  printf("enter the number of hours for which the taxi was retained: \n");
  scanf("%d",&h);
  
   t=0;
    if(d<=8)
	t=t+20;

  
     
      if( 8<d && d<12)
	t=t+20+10*(d-8);
      if(12<=d && d<=16)
	t=t+20+10*(d-8)+8*(d-12);
      if(16<d && d<=20)
	t=t+20+10*(d-8)+8*(d-12)+6*(d-16);
      if(d>20)
     	t=t+20+10*(d-8)+8*(d-12)+6*(d-16)+5*(d-20);
    
  
      if(1<=h && h<12)
	t=t+200;
      if(12<=h && h<=24)
	t=t+500;
      if(24<h)
	t=t+500+300*(h/24);
	  
  printf("the taxi fare is:%d",t);
  
  return 0;
}
      
      
	
