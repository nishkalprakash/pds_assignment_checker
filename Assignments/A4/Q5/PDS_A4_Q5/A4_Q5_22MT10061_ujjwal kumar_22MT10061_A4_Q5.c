#include<stdio.h>
#include<math.h>
  int main()
{
     int p;
     printf("Enter coefficient of x^0;  ");
     scanf("%d",&m);
     
     int q;
     printf("Enter coefficient of x^1;  ");
     scanf("%d",&n);
   

     int r;
     printf("Enter coefficient of x^2;  ");
     scanf("%d",&x);


     int s;
     printf("Enter coefficient of x^3;  ");
     scanf("%d",&y);


double a,b;
p=m*x*x*x+n*x*x+f*x+y;

double pc=1;

while((pc>=0.001)||(pc<=0.001))
{
pa=p*a*a*a+q*a*a+r*a+s;
pb=p*b*b*b+q*b*b+r*b+s;
c=((pa*(a-b)/pb-pa)+a);
pc=p*c*c*c+q*c*c+r*c+s;
if (pc*pa=0)
a=c;
else if(pc*pb>=0)
b=c;



}
print("root is %lf\n",c);




   return 0;
}
