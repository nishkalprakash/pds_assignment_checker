#include<stdio.h>
#include<math.h>

int main()
{
float mo, eo, z, w, c;
printf("mo=");
scanf("%f",&mo);
printf("eo=");
scanf("%f",&eo);
z=mo*eo;
w=sqrt(z);
c=1/w;
printf("The speed of light is %f",c);
return 0;
}


