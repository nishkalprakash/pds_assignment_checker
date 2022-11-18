/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
ASSIGNMENT:3(c)
*/
#include<stdio.h>
#include<math.h>


#include<stdio.h>
#include<math.h>


int main(){
int i,a[3],b[3],c[3],nx[3],dx[3],ny[3],dy[3];
float x[3],y[3],d1,d2,d3,s,area;

printf(" Enter the coefficients (a, b, c) of three lines:\n");
printf("Line 1:");
for(i=0;i<=2;i++){
    scanf("%d",&a[i]);
}
printf("Line 2:");
for(i=0;i<=2;i++){
    scanf("%d",&b[i]);
}
printf("Line 3:");
for(i=0;i<=2;i++){
    scanf("%d",&c[i]);
}
if((a[0]*b[1]-a[1]*b[0])==0){
    printf("Lines 1 and 2 are parallel; so no point of intersection.");
    return 0;
}
else if ((b[0]*c[1]-b[1]*c[0])==0){
    printf("Lines 2 and 3 are parallel; so no point of intersection.");
    return 0;
}
else if ((a[0]*c[1]-a[1]*c[0])==0){
    printf("Lines 3 and 1 are parallel; so no point of intersection.");
    return 0;
}
else
nx[0]=b[2]*a[1] - b[1]*a[2];
nx[1]=b[2]*c[1] - b[1]*c[2];
nx[2]=c[2]*a[1] - c[1]*a[2];
dx[0]=b[0]*a[1] - b[1]*a[0];
dx[1]=b[0]*c[1] - b[1]*c[0];
dx[2]=c[0]*a[1] - c[1]*a[0];
ny[0]=b[2]*a[0] - b[0]*a[2];
ny[1]=b[2]*c[0] - b[0]*c[2];
ny[2]=c[2]*a[0] - c[0]*a[2];
dy[0]=b[1]*a[0] - b[0]*a[1];
dy[1]=b[1]*c[0] - b[0]*c[1];
dy[2]=c[1]*a[0] - c[0]*a[1];

x[0]=((nx[0]))/((dx[0]));
x[1]=((nx[1]))/((dx[1]));
x[2]=((nx[2]))/((dx[2]));
y[0]=((ny[0]))/((dy[0]));
y[1]=((ny[1]))/((dy[1]));
y[2]=((ny[2]))/((dy[2]));

printf("Point of intersection between L1 and L2 = (%.5f,%.5f)\n",x[0],y[0]);                         //Point of intersection
printf("Point of intersection between L3 and L2 = (%.5f,%.5f)\n",x[1],y[1]);
printf("Point of intersection between L1 and L3 = (%.5f,%.5f)\n",x[2],y[2]);

d1= sqrt(pow(x[0]-x[1],2)+ pow(y[0]-y[1],2));
d2= sqrt(pow(x[2]-x[1],2)+ pow(y[2]-y[1],2));                                                        //side length
d3= sqrt(pow(x[0]-x[2],2)+ pow(y[0]-y[2],2));

printf("Side lengths =%.5f,%.5f,%.5f \n",d1,d2,d3);

s = (d1+d2+d3)*0.5 ;
area = sqrt(s * (s - d1) * (s - d2) * (s - d2));                                                      //area
printf("Area of a triangle = %.5f \n", area);

return 0;
}
