#include <stdio.h>
#include <math.h>

//creating function
float calfunc(float a1,float b1,float c1,float a2,float b2,float c2);
float calfunc(float a1,float b1,float c1,float a2,float b2,float c2);

float calfunc(float a1,float b1,float c1,float a2, float b2,float c2)
{
  float x,D;
   D=a1*b2-b1*a2;
   if (D==0)
     printf("The lines are parallel");
   else
   {
     x=(c1*b2-c2*b1)/D;
   }
  return (x);
}

float calfunc(float a1,float b1,float c1,float a2,float b2,float c2)
{
    float y,D;
    D=a1*b2-b1*a2;
    if (D==0)
    {
    printf("lines are parallel");
    }
    else
    {
    y=(c1*a2-c2*a1)/D;
    }
    return (y);
}
int main ()
{
    float a1,b1,c1,a2,b2,c2,a3,b3,c3,x1,y1,x2,y2,x3,y3,A,d1,d2,d3;
    //scaning the variables of lines 1 2 and 3.
    printf("enter a,b,c of the line 1, 2 and 3respectively");
    scanf("%f%f%f%f%f%f%f%f%f",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
    //callling the function and getting P.O.I x and y and storing it in x1,x2,x3 and y1,y2,y3.
    if (a1/a2==b1/b2 || a2/a3==b2/b3 || a1/a3==b1/b3)
    {
        printf("lines are parallel");
    }
    else{

            //callinf function
    x1=calfunc(a3,b3,c3,a2,b2,c2);
    y1=calfunc(a3,b3,c3,a2,b2,c2);

    x2=calfunc(a3,b3,c3,a1,b1,c1);
    y2=calfunc(a3,b3,c3,a1,b1,c1);

    x3=calfunc(a2,b2,c2,a1,b1,c1);
    y3=calfunc(a2,b2,c2,a1,b1,c1);

    //points of intersection
    printf("point of intersection A is (%f,%f)\n",x1,y1);
    printf("point of intersection B is (%f,%f)\n",x2,y2);
    printf("point of intersection C is (%f,%f)\n",x3,y3);

   //finding area.
    A=((x1*y2+x2*y3+x3*y1)-(x3*y2+x1*y3+x2*y1))/2;
    printf("area of triangle is %f",A);


    d1=sqrt((x2*x2-x3*x3)+(y2*y2-y3*y3));
    d2=sqrt((x1*x1-x3*x3)+(y1*y1-y3*y3));
    d3=sqrt((x2*x2-x1*x1)+(y2*y2-y1*y1));

    //printing sides
    printf("side lengths are %f, %f, %f",d1,d2,d3);
    }
}
