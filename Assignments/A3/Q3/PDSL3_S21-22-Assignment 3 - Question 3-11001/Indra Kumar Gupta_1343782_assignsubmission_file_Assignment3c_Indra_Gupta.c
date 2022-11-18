/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Assignment 3(c)
#include <stdio.h>
#include <math.h>
int trcal(int x1, int y1, int x2, int y2){
int status;
status = (x1*y2)-(x2*y1);
return(status);
}

int tri(int x1, int y1, int z1, int x2, int y2, int z2){
float x,y,sl;
x=(z1*y2)-(z2*y1);
y=(x1*z2)-(x2*z1);
printf("Point of intersection between L1 and L2 = (%f, %f).\n", x, y);



}



int main(){
int a1,a2,a3,b1,b2,b3,c1,c2,c3,check1, check2, check3;
printf("Enter the coefficients (a, b, c) of three lines(eg:Line 1: 1 0 0)\n");
printf("Line1:");
scanf("%d %d %d", &a1, &b1, &c1);
printf("Line2:");
scanf("%d %d %d", &a2, &b2, &c2);
printf("Line3:");
scanf("%d %d %d", &a3, &b3, &c3);



check1 = trcal(a1, b1, a2, b2);
check2 = trcal(a2, b2, a3, b3);
check3 = trcal(a3, b3, a1, b1);
if(check1==0){
printf("Lines 1 and 2 are parallel; so no point of intersection.");
return 0;
}else if(check2==0){
printf("Lines 2 and 3 are parallel; so no point of intersection.");
return 0;
}else if(check3==0){
printf("Lines 3 and 1 are parallel; so no point of intersection.");
return 0;
}
tri(a1, b1, c1, a2, b2, c2);
tri(a2, b2, c2, a3, b3, c3);
tri(a3, b3, c3, a1, b1, c1);


return 0;

}
