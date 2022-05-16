/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 1c
*/

#include<stdio.h>
#include<math.h>
 int main()
 {
    double x1,x2,x3,y1,y2,y3,a,b,c,big,m   ;
    printf("Enter coordinates of first point: ");
    scanf("%lf%lf",&x1,&y1);
     printf("Enter coordinates of second point: ");
    scanf("%lf%lf",&x2,&y2);
     printf("Enter coordinates of third point: ");
    scanf("%lf%lf",&x3,&y3);

    a = sqrt(pow(x2-x3,2)+ pow (y2-y3,2));
    b = sqrt(pow(x1-x3,2)+ pow (y1-y3,2));
    c = sqrt(pow(x1-x2,2)+ pow (y1-y2,2));



 /* if(a>b){
            m=a; }
    else m=b;
    if (m>c)
        { big = m;
      }
    else big = c; */


   /*cos A = (b2+c2-a2)/(2bc) ,if triang is obtuse ,only one angle is obtuse so  cos A is negative,so b2+c2-a < 0 we will use this logic
     if triangle is acute,all are positive,if right angle one  of them is zero */

    if ((a < b+c) && ( b < a+c) && (c < a+b) )
    {
        printf("the triangle is valid\n") ;

        if ((a*a + b*b > c*c) && (a*a + c*c > b*b) && (b*b+c*c >a*a ))

        {
          printf ("Triangle is acute")  ;
        }

        else if ((a*a + b*b < c*c) || (a*a + c*c < b*b) || (b*b+c*c < a*a ))

        {
          printf ("Triangle is obtuse")  ;

        }

        else printf ("Triangle is right angled")  ;


    }


  else
    printf("triangle is invalid");


















 return 0;}
