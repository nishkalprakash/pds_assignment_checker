#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{float z,s,height,t;
int k,i=1 ;
printf("Enter the initial height\n");
scanf("%f",&z);
printf("Enter the number of iterations\n");
scanf("%d",&k);
printf("The height of particle for different iterations is\n ");
while(i<=k)
{t=z;
s=sqrt(fabs(t));
z=fabs(z-s);
printf("(%f,%d)\n",z,i);
if(t==z)
{s=s-(1/i);
z=z-s*s;}
i++;
if(z==0)
{printf("(%f,%d)\n",z,i);
break;}
}
return 0 ;
}