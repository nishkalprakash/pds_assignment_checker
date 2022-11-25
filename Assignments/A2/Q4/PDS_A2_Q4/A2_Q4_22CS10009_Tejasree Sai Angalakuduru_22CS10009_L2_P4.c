#include<stdio.h>
#include<math.h>
int main ()
{
 double U,E,c;
 scanf("%lf %lf",&U,&E);
 c=1/(sqrt(U*E));
 printf("The speed of light is %.3e\n",c);
return 0;
}
