//This program is to compute the approx real root of cubic polynomial
#include <stdio.h>
#include <math.h>
int main()
{
     int c1,c2,c3,c0,i;
     double a,b,c;
     float p,x,p1,p2,pc;
     printf("Enter the coefficient of x^0:");
     scanf("%d",&c0);
     printf("\nEnter the coefficient of x^1:");
     scanf("%d",&c1);
     printf("\nEnter the coefficient of x^2:");
     scanf("%d",&c2);
     printf("\nEnter the coefficient of x^3:");
     scanf("%d",&c3);
     p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
     if (c3==0) printf("\nEnter the value greater than 0");
     else {
        printf("\ndo you want to check the values to initialize?? if yes (enter 1) else (0)");
        scanf("%d",&i);
        while (i) {
          printf("\nEnter the value u want to check:");
          scanf("%f",&x);
          p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
          printf("\nThe value of polynomial is %f",p);
          printf("\nDo you want to continue if yes enter 1 else 0");
          scanf("%d",&i);}}
      printf("\nEnter the values you want to initialize:");
      scanf("%lf %lf",&a,&b);
      p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
      x=a; p1=p; printf("%f",p1);
      p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
      x=b; p2=p; printf("%f",p2);
      p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
      c=a-((p1*(b-a))/(p2-p1)); x=c ;pc=p;
      do{
       if (pc*p1<0) {
          c=a-((p1*(c-a))/(pc-p1));
          p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
          x=c;}
       else if (pc*p2<0) {
          c=c-(((pc*(b-c))/(p2-pc)));
          p=c3*pow(x,3)+c2*pow(x,2)+c1*x+c0;
          x=c;} }while (pc>0.001);
       printf("\nThe root of the polynomial is %lf\n",c);
        
    return 0;
}
