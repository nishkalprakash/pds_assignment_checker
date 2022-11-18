/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include<stdio.h>
#include <stdio.h>
#include <math.h>

int main()
{
int x1,x2,x3,y1,y2,y3;
float a,b,c;

scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

//Calculating sides' lengths
a = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
b = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
c = sqrt(pow(x1-x3,2) + pow(y1-y3,2));
printf("%f %f %f\n",a,b,c);

//Checking validity of triangle and properties
if ( a<b+c && b<a+c &&c<a+b){printf("This is a valid triangle\n");
    if (a==b==c){printf("It is an Equilateral Triangle\n");}
        else if (a==b || b==c || a==c){printf("This is an Isosceles Triangle\n");}
            else {printf("This is a Scalene Triangle.\n");}}
else printf("This is an invalid triangle");
return 0;
}
