#include<stdio.h>
#include<math.h>

int main(){
float c;
float mu = 8.85e-12;
float epsn=12.566e-7;
c=1/sqrt(mu*epsn);
printf("speed of light is %f",c);
return 0;
}
