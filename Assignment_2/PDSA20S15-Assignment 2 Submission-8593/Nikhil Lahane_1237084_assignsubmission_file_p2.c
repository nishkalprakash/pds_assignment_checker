#include<stdio.h>
#include<math.h>
  int main()
  {
     double a,b,c,x1,x2;
   printf("Let f(x)=ax2+bx+c where a,b,c are real no.s\n");
   scanf("%lf%lf%lf",&a,&b,&c);
   printf("The values of a=%lf,b=%lf,c=%lf\n",a,b,c);


   if(b*b-4*a*c<0)printf("Nothing else to be done");
    if(b*b-4*a*c==0)printf("The roots are equal\n");
    x1=(-b+sqrt(b*b-4*a*c))/2*a;
    x2=(-b-sqrt(b*b-4*a*c))/2*a;
    if(b*b-4*a*c>=0)printf("Therefore the roots exist and are %lf and %lf",x1,x2);



  }
