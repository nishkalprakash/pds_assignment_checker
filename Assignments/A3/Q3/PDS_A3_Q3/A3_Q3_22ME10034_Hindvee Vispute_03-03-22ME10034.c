#include<stdio.h>

int main(){
float x1, y1, z1, x2, y2, z2, x3, y3, z3;

float m1, m2;

printf("A(x1,y1, z1) : (%f ,%f, %f)", x1,y1,z1);
printf("\n B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
printf("\n C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);

m1 = (y3-y2)/(x3-x2);
m2 = (y1-y2)/(x1-x2);
if(m1 = m2)
{
    printf("The points lie on the same line \n");

}
else{
    printf("The points do not lie on a line \n");
}


if(x1>x2 && x1>x3)
{
    printf("A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
    {
        if(x2>x3)
        {
            printf("> B(x2, y2, z2):(%f ,%f, %f"), x2,y2,z2);
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
        }
    }
}
if(x2>x1 && x2>x3)
{
   printf("B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
   if(x1>x3)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
if(x2>x1 && x2>x3)
{
   printf("B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
   if(x1>x3)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
if(x2>x1 && x2>x3)
{
   printf("B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
   if(x1>x3)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
if(x2>x1 && x2>x3)
{
   printf("B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
   if(x1>x3)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
if(x2>x1 && x2>x3)
{
   printf("B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
   if(x1>x3)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
        }
        else
        {
            printf(">C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
if(x3>x1 && x3>x2)
{
 printf("C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
   if(x1>x2)
        {
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1");
            printf("> B(x2, y2, z2):(%f ,%f, %f)", x2,y2,z2);
        }
        else
        {
            printf("> C(x3, y3, z3):(%f ,%f, %f)", x3,y3,z3);
            printf("> A(x1,y1, z1) : (%f ,%f, %f"), x1,y1,z1);
        }
}
}
