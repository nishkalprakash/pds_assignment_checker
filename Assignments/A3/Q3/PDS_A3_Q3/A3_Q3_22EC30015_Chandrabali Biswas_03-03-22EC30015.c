#include <stdio.h>
int main()         //main function
{
    double x1,y1,z1,x2,y2,z2,x3,y3,z3,maxx,midx,minx,maxy,midy,miny,maxz,minz,midz;  //declaring variables
    printf("Enter the coordinates:");
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&z1,&x2,&y2,&z2,&x3,&y3,&z3);  //taking input from user
    printf("A(%lf,%lf,%lf)\nB(%lf,%lf,%lf)\nC(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    if((x2-x1)/(x3-x2)==(y2-y1)/(y3-y2)  &&  (y2-y1)/(y3-y2)==(z2-z1)/(z3-z2))   //checking collinearity
        printf("The given three points are collinear.\n");
    else
        printf("The given three points are not collinear.\n");
        maxx = (x1>x2)?(x1>x3?x1:x3):(x2>x3?x2:x3);
        minx = (x1<x2)?(x1<x3?x1:x3):(x2<x3?x2:x3);
        midx = (x1!=maxx && x1!=minx)? x1:((x2!=maxx && x2!=minx)?x2:x3);

        maxy = (y1>y2)?(y1>y3?y1:y3):(y2>y3?y2:y3);
        miny = (y1<y2)?(y1<y3?y1:y3):(y2<y3?y2:y3);
        midy = (y1!=maxy && y1!=miny)? y1:((y2!=maxy && y2!=miny)?y2:y3);

        maxz = (z1>z2)?(z1>z3?z1:z3):(z2>z3?z2:z3);
        minz = (z1<z2)?(z1<z3?z1:z3):(z2<z3?z2:z3);
        midz = (z1!=maxz && z1!=minz)? z1:((z2!=maxz && z2!=minz)?z2:z3);
    if(x1!=x2 && x2!=x3 && x1!=x3)    //finds out result when x coordinates are unequal
    {

        if(minx==x1)
        {
            if(x2<x3)
                printf("A(%lf,%lf,%lf) < B(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            else
                printf("A(%lf,%lf,%lf) < C(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);

        }
        else if(minx==x2)
        {
            if(x1<x3)
                printf("B(%lf,%lf,%lf) < A(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else
                printf("B(%lf,%lf,%lf) < C(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x2,y2,z2,x3,y3,z3,x1,y1,z1);

        }
        else
        {
            if(x1<x2)
                printf("C(%lf,%lf,%lf) < A(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            else
                printf("C(%lf,%lf,%lf) < B(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x1,y1,z1);
        }
    }
    else if(minx==maxx && y1!=y2 && y2!=y3) //finds out for when x coordinates are all equal and y coordinates are unequal
    {
          if(miny==y1)
        {
            if(y2<y3)
                printf("A(%lf,%lf,%lf) < B(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            else
                printf("A(%lf,%lf,%lf) < C(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);

        }
        else if(miny==y2)
        {
            if(y1<y3)
                printf("B(%lf,%lf,%lf) < A(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else
                printf("B(%lf,%lf,%lf) < C(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x2,y2,z2,x3,y3,z3,x1,y1,z1);

        }
        else
        {
            if(y1<y2)
                printf("C(%lf,%lf,%lf) < A(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            else
                printf("C(%lf,%lf,%lf) < B(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x1,y1,z1);
        }
    }
    else if(minx==maxx && miny==maxy && z1!=z2 && z2!=z3) //finds out for when x and y coordinates are all equal but z coordinates are unequal
    {
         if(minz==z1)
        {
            if(z2<z3)
                printf("A(%lf,%lf,%lf) < B(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
            else
                printf("A(%lf,%lf,%lf) < C(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);

        }
        else if(minz==z2)
        {
            if(z1<z3)
                printf("B(%lf,%lf,%lf) < A(%lf,%lf,%lf) < C(%lf,%lf,%lf)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
            else
                printf("B(%lf,%lf,%lf) < C(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x2,y2,z2,x3,y3,z3,x1,y1,z1);

        }
        else
        {
            if(z1<z2)
                printf("C(%lf,%lf,%lf) < A(%lf,%lf,%lf) < B(%lf,%lf,%lf)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
            else
                printf("C(%lf,%lf,%lf) < B(%lf,%lf,%lf) < A(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x1,y1,z1);
        }
    }
   return 0;


}
