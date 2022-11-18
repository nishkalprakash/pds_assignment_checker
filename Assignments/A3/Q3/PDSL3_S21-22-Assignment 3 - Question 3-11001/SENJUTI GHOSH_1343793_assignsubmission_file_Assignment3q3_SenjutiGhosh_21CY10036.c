/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
double point_of_intersection(double a1,double b1,double c1,double a2,double b2,double c2){
double A[10],x,y;
x=((b2*c1)-(b1*c2))/((a1*b2)-(a2*b1));
y=((a1*c2)-(a2*c1))/((a1*b2)-(a2*b1));
if (((a1*b2)-(a2*b1))==0){
    return 0;}
A[0]=x;
A[1]=y;
return (A[]);
}
int main(){
double p[],q[],r[],a1,b1,c1,a2,b2,c2,a3,b3,c3;
printf("Enter coefficients of line 1");
scanf("%lf %lf %lf",&a1,&b1,&c1);
printf("Enter coefficients of line 2");
scanf("%lf %lf %lf",&a2,&b2,&c2);
printf("Enter coefficients of line 3");
scanf("%lf %lf %lf",&a3,&b3,&c3);
p[]=point_of_intersection(a1,b1,c1);
q[]=point_of_intersection(a2,b2,c2);
r[]=point_of_intersection(a3,b3,c3);

return 0;
}
