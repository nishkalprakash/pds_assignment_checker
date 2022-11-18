/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include <math.h>

float intersection(float , float, float, float, float, float );
float length (float, float, float, float );
float area(float, float, float);

int main() {
float a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,y1,x2,y2,x3,y3,l1,l2,l3;
printf("Enter the coefficients (a, b, c) of three lines:\n");
scanf("%f %f %f", &a1,&b1,&c1);
scanf("%f %f %f", &a2,&b2,&c2);
scanf("%f %f %f", &a3,&b3,&c3);

printf("point of intersection between L1 and L2=(%f, %f)\n", intersection(a1,a2,b1,b2,c1,c2), intersection(  b1, a1 , c1 , b2 , a2 , c2 ));
printf("point of intersection between L2 and L3=(%f, %f)\n", intersection(a2,a3,b2,b3,c2,c3), intersection(  b2, a2 , c2 , b3 , a3 , c3 ));
printf("point of intersection between L3 and L1=(%f, %f)\n", intersection(a3,a1,b3,b1,c3,c1), intersection(  b3, a3 , c3 , b1, a1 , c1 ));

x1=intersection(a1,a2,b1,b2,c1,c2);
x2=intersection(a2,a3,b2,b3,c2,c3);
x3=intersection(a3,a1,b3,b1,c3,c1);
y1=intersection(  b1, a1 , c1 , b2 , a2 , c2 );
y2=intersection(  b2, a2 , c2 , b3 , a3 , c3 );
y3=intersection(  b3, a3 , c3 , b1, a1 , c1 );

printf("side lengths: %f, %f, %f \n", length(x1,y1,x2,y2), length(x2,y2,x3,y3), length(x3,y3,x1,y1) );

l1=length(x1,y1,x2,y2);
l2=length(x2,y2,x3,y3);
l3=length(x3,y3,x1,y1);

printf("area: %f \n", area(l1, l2, l3));

return 0;
}




float intersection(float a1, float b1, float c1, float a2, float b2, float c2){

    return(  ((c1*b2)-(c2*b1))/((a1*b2)-(a2*b1))  );
}


float length(float x1, float y1, float x2, float y2){

float delx=pow(x2-x1,2);
float dely=pow(y2-y1,2);
return (sqrt(delx+dely));
}


float area(float l1, float l2, float l3){
    float s=(l1+l2+l3)/2 ;
    float a=sqrt(  s*(s-l1)*(s-l2)*(s-l3)  ) ;
    return a;
}

