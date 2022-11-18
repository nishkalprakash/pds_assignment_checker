/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,x3,y1,y2,y3;
    float l1,l2,l3,max,less1,less2;
    printf ("Enter the three coordinates: ");
    scanf ("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);

    l1 = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    l2 = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
    l3 = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));

    if (l1+l2>l3 && l2+l3>l1 && l1+l3>l2)
    {
        printf("This is a valid Triangle");


     if (l1>l2 && l1>l3)
    {
        max = l1;
        less1= l2;
        less2 = l3;
    }
    else if (l2>l3 && l2>l1)
    {
        max = l2;
        less1 = l1;
        less2 = l3;
    }
    else {
        max = l3;
        less1 = l1;
        less2 = l2;
    }

   float w = less1*less1 + less2*less2;
   float k = max*max;

   if (w == k)
   {
        printf("This is a Right triangle");
   }

   else if (w>k)
   {
       printf("This is an Acute triangle");
   }
   else
   {
    printf("This an Obtuse triangle");
   }

    }

    else
        {
            printf("This is not a valid Triangle");
        }

}
