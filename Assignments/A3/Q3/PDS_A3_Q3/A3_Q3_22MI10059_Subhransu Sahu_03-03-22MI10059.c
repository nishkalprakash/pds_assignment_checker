#include<stdio.h>
int main()
{
float x1, x2, x3, y1, y2, y3, z1, z2, z3, c;

printf("A(x1,y1,z1): ");
scanf("%f %f %f", &x1, &y1, &z1);

printf("B(x2,y2,z2): ");
scanf("%f %f %f", &x2, &y2, &z2);

printf("C(x3,y3,z3): ");
scanf("%f %f %f", &x3, &y3, &z3);

printf("A(x1,y1,z1: %.2f %.2f %.2f \n", x1 ,y1 ,z1);
printf("B(x2,y2,z2: %.2f %.2f %.2f \n", x2 ,y2 ,z2);
printf("C(x3,y3,z3: %.2f %.2f %.2f \n", x3 ,y3 ,z3);



c = ( x1*(y2*z3 - y3*z2)) + (y1*(z2*x3 - x2*z3)) + (z1*(x2*y3 - y2*x3));

if ( c==0 )
{
    printf("The given three points are collinear.");
}
else { printf("The given three points are not collinear.");}


return 0;
}
