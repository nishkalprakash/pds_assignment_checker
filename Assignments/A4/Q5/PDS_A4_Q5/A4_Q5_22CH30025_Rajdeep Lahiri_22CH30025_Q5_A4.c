#include <stdio.h>

int main()
{
int c1,c2,c3,c4;
double a,b,c,p,q,pc;
printf("enter the coefficients");
scanf("%d",&c1);
scanf("%d",&c2);
scanf("%d",&c3);
scanf("%d",&c4);


while(1){
printf("enter the value of a and b");
scanf("%lf",&a);
scanf("%lf",&b);

if (((a*a*a*c1+a*a*c2+a*c3+c4)*(b*b*b*c1+b*b*c2+b*c3+c4))<0 && a<b)
break;
}



while(1)
{
p = a*a*a*c1+a*a*c2+a*c3+c4;
q = b*b*b*c1+b*b*c2+b*c3+c4;
c = b - (q*(b-a))/(q-p);
pc = c*c*c*c1+c*c*c2+c*c3+c4;
if (pc<0.001 || pc>-0.001){
printf ("the root is %lf",c);
break;
}
else if(pc*p>0)
a=c;
else
b=c;
}
return 0;
}


