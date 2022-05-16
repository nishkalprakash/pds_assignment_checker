/*Name - Pushkaraj Jagtap
  Roll no. - 21MF3IM12
  GROUP NO. - 5
  Package - Code Blocks*/

#include<stdio.h>
int main(){
   int n,max;
   float x[n],error,w;

   printf("Our function f(x)=x^3-25\n");

   printf("x[0]:\n");
   scanf("%f",&x[0]);

   printf("e\n");
   scanf("%f",&error);

   printf("maxIteration\n");
   scanf("%f",&max);

   printf("Iteration        x0           x1            Error\n");
        n=0;
        w=1;
      while(n<=max) {

           x[n+1]=x[n]- (((x[n]*x[n]*x[n])-25)/(3*x[n]*x[n]));
            w=x[n]-x[n+1];



        printf("%d            %f           %f            %f\n",n+1,x[n],x[n+1],w);
         n=n+1;

            }
        printf("square root is %lf",x[n]);
       }


