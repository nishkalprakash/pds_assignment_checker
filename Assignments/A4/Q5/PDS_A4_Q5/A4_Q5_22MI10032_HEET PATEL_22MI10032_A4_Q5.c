/*
Section 14
Roll No : 22MI10032
Name : HEET PATEL
Assignment No : 4
Description : To find an approximate root of cubic polynomial
*/
#include<stdio.h>
int  main () {
int i , j , k , l ;
double a,b , temp , temp1 ;
printf("Enter coefficient of x^O\n");
scanf("%d",&i);
printf("Enter coefficient of x^1\n");
scanf("%d",&j);
printf("Enter coefficient of x^2\n");
scanf("%d",&k);
printf("Enter coefficient of x^3\n");
scanf("%d",&l);
printf("Enter a and b\n");
scanf("%lf%lf",&a ,&b);
if(a>b){
temp = a ;
a= b;
b = temp;
}
double  a1,b1 , c , c1 ; // for a1 = p(a) , for b1 = p(b)
a1 = l*a*a*a + k*a*a + j*a + i ;
b1 = l*b*b*b + k*b*b + j*b + i ;

c = a + (a1)*(a-b)/(b1-a1);
c1 = l*c*c*c + k*c*c + j*c + i ;

while(b>a){
a1 = l*a*a*a + k*a*a + j*a + i ;
b1 = l*b*b*b + k*b*b + j*b + i ;

c = a + (a1)*(a-b)/(b1-a1);
c1 = l*c*c*c + k*c*c + j*c + i ;

if (a1 * c1 > 0 ){
a = c;
}
if (a1 * c1 < 0 ){
b = c;
}}
if (c1<0.001){
printf("root of the polynomial:%lf",c1);
}
return 0 ;
}
