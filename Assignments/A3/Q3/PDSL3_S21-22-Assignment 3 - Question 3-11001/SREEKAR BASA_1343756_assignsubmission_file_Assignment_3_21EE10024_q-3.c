/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 3
Question : 3
*/
#include <stdio.h>
#include <math.h>

void intersect(float a1,float b1,float c1,float a2,float b2,float c2,float i[])
{
    float x,y;
    x = (((c1*b2)-(c2*b1))*1.0)/((a1*b2)-(a2*b1)) ;
    y = (((c1*a2)-(c2*a1))*1.0)/((b1*a2)-(b2*a1)) ;
    i[0] = x;
    i[1] = y;

}


int main()
{
    float a[3],b[3],c[3];
    float x1,x2,x3,y1,y2,y3 ;
    float i1[2],i2[2],i3[2];
    int i,j,k1,k2,k3;
    float d1,d2,d3,s,Area ;
    printf("Enter the coefficients : (ax+by=c) type of lines ");

    printf(" Line-1 : ( a1x+b1y=c1 ) \n");
    printf("a1 :");
    scanf("%f",&a[0]);
    printf("b1 :");
    scanf("%f",&b[0]);
    printf("c1 :");
    scanf("%f",&c[0]);

    printf(" Line-2 : ( a2x+b2y=c2 ) \n");
    printf("a2 :");
    scanf("%f",&a[1]);
    printf("b2 :");
    scanf("%f",&b[1]);
    printf("c2 :");
    scanf("%f",&c[1]);

    printf(" Line-3 : ( a3x+b3y=c3 ) \n");
    printf("a3 :");
    scanf("%f",&a[2]);
    printf("b3 :");
    scanf("%f",&b[2]);
    printf("c3 :");
    scanf("%f",&c[2]);

    if(((a[0]*1.0)/a[1]) == ((b[0]*1.0)/b[1]))
       {
        k1 = 0 ;
       }

    else k1 = 1;


    if(((a[2]*1.0)/a[1]) == ((b[2]*1.0)/b[1]))
    {
        k2 = 0;
    }
    else k2 = 1;

    if(((a[2]*1.0)/a[0]) == ((b[2]*1.0)/b[0]))
    {
        k3 = 0;
    }
    else k3 = 0 ;

    printf(" Points of intersections are : \n");
     if (k1==1)
     {
         intersect(a[0],b[0],c[0],a[1],b[1],c[1],i1) ;
         printf(" Lines 1 & 2 : (%d,%d)",i1[0],i1[1]);
         i1[0] = x1 ;
         i1[1] = y1 ;
     }
     else if (k1==0) printf("Lines 1 and 2 are parallel; so no point of intersection \n");

     if (k2==1)
     {
         intersect(a[1],b[1],c[1],a[2],b[2],c[2],i2) ;
         printf(" Lines 2 & 3 : (%d,%d)",i2[0],i2[1]);
         i2[0] = x1 ;
         i2[1] = y1 ;
     }
     else if (k2==0)
     {
       printf("Lines 2 and 3 are parallel; so no point of intersection \n");
     }

     if (k3==1)
     {
         printf(" Lines 1 & 3 : (%d,%d)",i3[0],i3[1],i3);
         intersect(a[2],b[2],c[2],a[1],b[1],c[1],i3) ;
         i3[0] = x1 ;
         i3[1] = y1 ;
     }
     else if (k3==0) printf("Lines 1 and 3 are parallel; so no point of intersection \n");

    if((k1==1)&&(k2==1)&&(k3==1))
    {
    d1 = sqrt(pow((x1-x2),2)+pow(y1-y2,2));
    d2 = sqrt(pow((x3-x2),2)+pow(y3-y2,2));
    d3 = sqrt(pow((x1-x3),2)+pow(y1-y3,2));

    s = (d1+d2+d3)/2.0 ;
    Area = sqrt(s*(s-d1)*(s-d2)*(s-d3));
    }
}

