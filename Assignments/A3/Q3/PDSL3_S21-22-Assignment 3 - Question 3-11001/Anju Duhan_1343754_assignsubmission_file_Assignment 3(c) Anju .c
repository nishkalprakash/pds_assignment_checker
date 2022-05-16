#include<stdio.h>
#include <stdlib.h>
#include<math.h>
float ptofinterx(float a1,float b1, float c1, float a2, float b2, float c2)
{
    float x=0;
    x=(-b1*(a2*c1-c2*a1)/(a1*b2-a2*b1)-c1)/a1;
    return x;
}
float ptofintery(float a1,float b1, float c1, float a2, float b2, float c2)
{
    float y=0;
    y=(a2*c1-c2*a1)/(a1*b2-a2*b1);
    return y;
}
float sidelength(float poix1, float poix2, float poiy1, float poiy2)
{
    float side=0;
    side=sqrt((poix1-poix2)*(poix1-poix2)+(poiy1-poiy2)*(poiy1-poiy2));
    return side;
}
float area(float a, float b, float c)
{
    float s=(a+b+c)/2;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

main()
{   float a1,a2,a3,b1,b2,b3,c1,c2,c3;
    printf("enter coeffients of line 1=");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("enter coeffients of line 2=");
    scanf("%f %f %f",&a2,&b2,&c2);
    printf("enter coeffients of line 3=");
    scanf("%f %f %f",&a3,&b3,&c3);
    float poi1x,poi2x,poi3x,poi1y,poi2y,poi3y;
    if(a1/a2==b1/b2)
    {
        printf("\nLines 1 and 2 are parallel; so no point of intersection");
    }
    else if(a1/a2!=b1/b2)
    {
        poi1x=(-b1*(a2*c1-c2*a1)/(a1*b2-a2*b1)-c1)/a1;;
        printf("\n%f",poi1x);
        poi1y=(a2*c1-c2*a1)/(a1*b2-a2*b1);
        printf("\n%f",poi1y);
    };
    if(a2/a3==b2/b3)
    {
        printf("\nLines 2 and 3 are parallel; so no point of intersection");
    }
    else if(a2/a3!=b2/b3)
    {
        poi2x=(-b2*(a3*c2-c3*a2)/(a2*b3-a3*b2)-c2)/a2;
        printf("\n%f",poi2x);
        poi2y=(a3*c2-c3*a2)/(a2*b3-a3*b2);
        printf("\n%f",poi2y);
    };
    if(a1/a3==b1/b3)
    {
        printf("\nLines 1 and 3 are parallel; so no point of intersection");
    }
    else if(a1/a3!=b1/b3)
    {
        poi3x=(-b1*(a3*c1-c3*a1)/(a1*b3-a3*b1)-c1)/a1;
        printf("\n%f",poi3x);
        poi3y=(a3*c1-c3*a1)/(a1*b3-a3*b1);
        printf("\n%f",poi3y);
    };
    float s1=sidelength(poi1x,poi2x,poi1y,poi2y);
    float s2=sidelength(poi2x,poi3x,poi2y,poi3y);
    float s3=sidelength(poi1x,poi3x,poi1y,poi3y);
    printf("\nSide lengths= %f %f %f",s1,s2,s3);
    float area1=area(s1,s2,s3);
    printf("\n Area= %f",area1);


}
