
#include <stdio.h>
#include <math.h>

int main()

{
  int Th;
  float xO,yO,u,a,t,xT,yT,d ;
  
   scanf ("%f%f%f%f%f%d" , &u,&a,&t,&xO,&yO,&Th);
   
  printf (" Initial speed u= %f, \n, acceleration a= %f, \n, time passed t= %f, \n, initial position (xO,yO)= %f,%f, \n, angle made theta =%d ,\n," , u,a,t,xO,yO,Th);
  
 
  
  d= (u*t) + ((1/2)*(a*t*t));
  
  xT= d*cos(Th);
  yT= d*sin(Th);
  
  printf ("New position Q= (%f,%f), \n" , xT, yT);
  
  return 0;
  
  }
