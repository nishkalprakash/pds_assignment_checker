#include<stdio.h>
#include<math.h>


int main()
{
 int a,b,c;
 float ans1, ans2;

 printf("enter value of a,b,c");
 scanf("%d %d %d",&a,&b,&c);
 ans1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
 ans2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
 printf("%f %f", ans1,ans2);
 return 0;


}

