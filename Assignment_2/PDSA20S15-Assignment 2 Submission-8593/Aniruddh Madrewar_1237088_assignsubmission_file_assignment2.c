#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,num,f1,f2;
 printf("Enter The Values of a,b,c of ax2+bx+c=0\n");
 scanf("%f%f%f",&a,&b,&c);
 printf("The Coefficeints of the equation are %f,%f,%f\n",a,b,c);
 num=b*b-4*a*c;
 if(num<0)
 {
     printf("The roots are complex");
 }
 else
 {
  f1=(-b+sqrt(b*b-4*a*c))/2;
  f2=(-b-sqrt(b*b-4*a*c))/2;
  printf("The roots are%f,%f",f1,f2);
 }
}
