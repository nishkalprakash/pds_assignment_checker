#include<stdio.h>

int main() {
float A,B,C,x1,x2,x3,y1,y2,y3,z1,z2,z3;
printf("enter the three coordinates\n");
scanf("%f%f%f\n",&x1,&y1,&z1);
scanf("%f%f%f\n",&x2,&y2,&z2);
scanf("%f%f%f",&x3,&y3,&z3);

printf("A(x1,y1,z1) : (%f,%f,%f)\n",x1,y1,z1);
printf("B(x2,y2,z2) : (%f,%f,%f)\n",x2,y2,z2);
printf("C(x3,y3,z3) : (%f,%f,%f)\n",x3,y3,z3);
return 0;

}
