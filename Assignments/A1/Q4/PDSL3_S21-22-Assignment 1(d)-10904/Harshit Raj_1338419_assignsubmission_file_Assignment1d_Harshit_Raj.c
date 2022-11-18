/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/

#include <stdio.h>
int main() {

float a,b,c,d,e,f;
printf("enter abscissa of first coordinate:");
scanf("%f", &a);
printf("enter ordinate of first coordinate:");
scanf("%f", &b);

printf("enter abscissa of second coordinate:");
scanf("%f",  &c);
printf("enter ordinate of second coordinate:");
scanf("%f", &d);

printf("enter abscissa of third coordinate:");
scanf("%f",  &e);
printf("enter ordinate of third coordinate:");
scanf("%f",  &f);

float x,y,z;
x=pow((pow((a-c),2)+(pow((b-d),2))),(1/2));
y=pow((pow((c-e),2)+(pow((d-f),2))),(1/2));
z=pow((pow((a-e),2)+(pow((b-f),2))),(1/2));
printf("length of the sides are %f,%f,%f ", x,y,z);


if (x>y+z)
    printf("triangle is valid");

   else if (y>x+z)
    printf("triangle is valid");

   else if (z>y+x)
    printf("triangle is valid");

    else printf("triangle not valid");






return 0;
}
