#include <stdio.h>
#include <math.h>
int main (){
      
      double c1, c2, c3 , c4 ;
      double a=5 , b=5 , c , pa , pb , pc , m ;

      printf(" Enter the coefficient of x^0: ");
      scanf("%lf", &c1);

      printf(" Enter the coefficient of x^1: ");
      scanf("%lf", &c2);

      printf(" Enter the coefficient of x^2: ");
      scanf("%lf", &c3);

      printf(" Enter the coefficient of x^3: ");
      scanf("%lf", &c4);
    
      pa=(c4*(a*a*a))+(c3*(a*a))+(c2*a)+(c1);
      pb=(c4*(b*b*b))+(c3*(b*b))+(c2*b)+(c1);
    
      

while ((pa*pb)>0){
      a=0.001;
      b=0.001;
     pa=(c4*(a*a*a))+(c3*(a*a))+(c2*a)+(c1);
     pb=(c4*(b*b*b))+(c3*(b*b))+(c2*b)+(c1);
}






return 0 ;
}

