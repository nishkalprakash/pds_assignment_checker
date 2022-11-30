/*Sec        :14
Name       :Tejasree sai
Roll no    : 22CS10009
Assignment :4
Description:Finding roots of cubic equation
*/

#include<stdio.h>
#include<math.h>
int main ()
{
 int a1,a2,a3,a4;
 double a,b,c,x,p,pa,pb,pc  ;
 printf("Enter coefficient of x^0:\nEnter coefficient of x^1:\nEnter coefficient of x^2:\nEnter coefficient of x^3:\n");
 scanf("%d %d %d %d",&a4,&a3,&a2,&a1);
 printf("Enter the values of a and b:\n");
 scanf("%lf %lf",&a,&b);
 x=a;
 p= a1*(x*x*x)+a2*(x*x)+a3*x+a4;
 pa=p;
 x=b;
 p= a1*(x*x*x)+a2*(x*x)+a3*x+a4;
 pb=p;
 c=b+((-pb)*((b-a)/(pb-pa)));
 x=c;
 p= a1*(x*x*x)+a2*(x*x)+a3*x+a4;
 pc=p;
 
 while(pc>0.001||pc<-0.001)
  {
   if (pa*pc>0)
      {pa=pc;
      a=c;}
   else
     {pb=pc;
      b=c;}
    
    c=b+((-pb)*((b-a)/(pb-pa)));
    x=c;
    p= a1*(x*x*x)+a2*(x*x)+a3*x+a4;
    pc=p;
  }
 printf("Root of the polynomial is:%lf\n",c);
 
 
 return 0;
}
