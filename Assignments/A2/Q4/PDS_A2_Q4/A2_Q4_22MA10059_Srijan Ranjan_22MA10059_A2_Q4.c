#include<stdio.h>
#include<math.h>
int main(){
double u,e;
printf("Enter u and e:");
scanf("%lf %lf",&u,&e);
printf("Value of u is %e and of e is %e\n",u,e);
double n1,n2,n3;
n1=u*e;
n2=pow(n1,1/2);
n3=1/n2;
printf("Speed of light c= %lf\n",n3);
return 0;
}

