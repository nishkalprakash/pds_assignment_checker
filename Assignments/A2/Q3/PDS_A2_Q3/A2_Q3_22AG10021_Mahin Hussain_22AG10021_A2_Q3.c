#include <math.h>
#include <stdio.h>

int main()

{
int d1,d2,d3;
float x,y,z;
printf("Enter coeffecients \n");
scanf("%d %d %d", &d1, &d2, &d3);  //read the coeffecients
x=sqrt(d2*d2-4*d1*d3);   //to find discriminant
y=((d2*-1)+x)/2*d1;      //finding 2 different roots 
z=((d2*-1)-x)/2*d1;        
printf("%f %f",y,z);
return 0;
}
