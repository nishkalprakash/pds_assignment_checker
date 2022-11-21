#include <stdio.h>
#include <math.h>

int main(){


// for finding square root of axx+bx+c=0
int d,a,c,b;
float z;




printf("enter the value of a");
scanf("%d",&a);

printf("enter value of b");
scanf("%d",&b);

printf("enter value of c");

scanf("%d",&c);


d=(b*b-4*a*c);

 z=(-b+sqrt(d))/2*a;

printf("your root is %f",z);



return 0;
}
