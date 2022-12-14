#include <stdio.h>
#include <math.h>

int main() {
int x1,x2,x3,y1,y2,y3 ; // (x1,y1) (x2,y2) (x3,y3) are the coordinates of a vertex of triangle

printf("enter values of x1,y1 : ");
scanf("%d%d", &x1, &y1);

printf("enter values of x2,y2 : ");
scanf("%d%d", &x2, &y2);

printf("enter values of x3,y3 : ");
scanf("%d%d", &x3, &y3);

int l1,l2,l3; // these are length of sides of triangle
l1 = sqrt((x2-x1)^2 + (y2-y1)^2);
l2 = sqrt((x2-x3)^2 + (y2-y3)^2);
l3 = sqrt((x3-x1)^2 + (y3-y1)^2);


return 0;
}
