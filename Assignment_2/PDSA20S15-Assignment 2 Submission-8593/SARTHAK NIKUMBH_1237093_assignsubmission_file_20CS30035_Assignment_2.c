#include <stdio.h>
#include <math.h>

int main(){
  float a,b,c;
  double x1,x2;
  printf("Enter the coefficients of the quadratic equation\n");
  scanf("%f%f%f",&a,&b,&c);
  printf("The coefficients of the equation are %f,%f and %f\n",a,b,c);
  if((pow(b,2)-4*a*c)<0){
    printf("The equation has complex roots.\n");
  }
  else{
    x1=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    x2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
    printf("The roots of the equation are %lf,%lf\n",x1,x2);
    if(x1==x2){
        printf("The roots are equal.\n");
    }
  }
}
