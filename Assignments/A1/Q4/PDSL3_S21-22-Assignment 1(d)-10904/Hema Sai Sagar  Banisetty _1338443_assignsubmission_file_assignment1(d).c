/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
#include<math.h>
float main()
{
    float x1, x2, x3, y1, y2, y3, a, b, c, s, delta;
    printf("Enter the three coordinates in the order x1, y1, x2, y2, x3, y3:\n");
    scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt(pow(x2-x3,2) + pow(y2-y3,2));
    b = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
    c = sqrt(pow(x1-x2,2) + pow(y1-y2,2));
    s = (a+b+c)/2;
    delta = sqrt(s*(s-a)*(s-b)*(s-c));

    if((a<b+c)&&(b<c+a)&&(c<a+b)&&(delta != 0))
        printf("This is a valid triangle\n");
    else
        printf("This is an invalid triangle");

   return 0;
}
