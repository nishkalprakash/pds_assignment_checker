#include<stdio.h>
#include<math.h>
int main ()
{
   int x0 , y0 , theta , a , t ;
   double u , degree , xt , yt ;
   printf ("Enter x0 = \n") ;
   scanf ("%d" , &x0 ) ;
   printf ("Enter y0 = \n") ;
   scanf ("%d" , &y0) ;
   printf ("Enter theta in degree = \n" ) ;
   scanf ("%d" , &theta ) ;
   printf ("Enter magnitude of accelaration = \n") ;
   scanf ("%d" , &a) ;
   printf ("Enter duration of motion = \n") ;
   scanf ("%d" , &t ) ;
   printf ("Enter initial speed = \n ") ;
   scanf ("%lf" , &u) ;
   degree = theta * (M_PI) / 180 ;
   xt = x0 + (u * cos (degree) * t) + (1/2 * a * t * t) ;
   yt = y0 + (u * sin (degree) * t) + (1/2 * a * t * t) ;
      printf ("xt = %lf , yt = %lf \n" , xt , yt ) ;
   return 0 ;
}
   
