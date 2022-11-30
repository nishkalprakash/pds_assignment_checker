#include<stdio.h>


int main()
{
float p, q,r,s,c;
printf("Enter the coefficient of x^0: ");
scanf("%f",&s);

printf("Enter the coefficient of x^1: ");
scanf("%f",&r);

printf("Enter the coefficient of x^2: ");
scanf("%f",&q);

printf("Enter the coefficient of x^3: ");
scanf("%f",&p);

double a,b;
printf("Enter the value of a:");
scanf("%lf",&a);
printf("Enter the value of b:");
scanf("%lf",&b);
if(a<b){
printf("Proper Input \n");
}else printf("Not a correct Input \n");
float pa,pb;
pa=p*a*a*a+q*a*a+r*a+s;
pb=p*b*b*b+q*b*b+r*b+s;

if(pa*pb<0)
printf("Okay!\n");
else printf("Not Okay! \n");
double pc=1;

while((pc>=0.001)||(pc<=-0.001))
{
pa=p*a*a*a+q*a*a+r*a+s;
pb=p*b*b*b+q*b*b+r*b+s;

c=((pa*(a-b)/(pb-pa))+a);
pc=(p*c*c*c)+(q*c*c)+(r*c)+(s);
if(pc*pa>=0)
a=c;
else if(pc*pb>=0)
b=c;

}
printf("Root is: %lf\n",c);
return 0;
}


	

