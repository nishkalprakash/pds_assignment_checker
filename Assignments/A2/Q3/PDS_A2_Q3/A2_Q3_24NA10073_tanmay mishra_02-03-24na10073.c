//program to calculate Tp..?
 
//code creator : tanmay mishra
//roll number : 24na10073


#include <stdio.h> 
#include <math.h>
int main()
{
 
 
 float x0,y0,u,theta,alpha,Yt ,Xt ,t, angle;
 
 printf("\n enter x0:");
 scanf("%f", &x0);
 
 printf("\n enter y0:");
 scanf("%f", &y0);
 
 printf("\n enter initial velocity u:");
 scanf("%f", &u);
 
 printf("\n enter theta:");
 scanf("%f", &theta);
  angle = theta * 57 ;
  
  
 printf("\n enter accelaration alpha:");
 scanf("%f", &alpha);
 
 printf("\n enter time t:");
 scanf("%f", &t);
 
 Yt = y0 + (u*sin(angle)*t) + 0.5*alpha*t*t;
 Xt =x0 + (u*cos(angle)*t) + 0.5*alpha*t*t;
 
 printf("Q(Xt,Yt)=Q(%f,%f) " , Xt,Yt);
 
 return 0;
 
   
   }


