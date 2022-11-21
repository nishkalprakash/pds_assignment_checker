#include<stdio.h>
#include<math.h>

int main()
{
int a, b, c;
float s1, s2, s3, s4;
scanf("%d%d%d",&a,&b,&c);
printf("The quadratic equation is %dx^2 + %dx + %d = 0 \n",a,b,c);
s1=b*b - 4*a*c;
s2=sqrt(s1);
s3=(-b+s2)/2/a;
s4=(-b-s2)/2/a;
printf("The roots are %f,%f \n",s3,s4);
return 0;
}


