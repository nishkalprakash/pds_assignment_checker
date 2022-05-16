#include <stdio.h>
#include <math.h>
//self explanatory function for each function needed
int chk(int a[],int b[])
{
    if(a[1]!=0&&b[1]==0)
    return 1;
    if(a[1]==0&&b[1]!=0)
    return 1;
    if(a[0]*b[1]==b[0]*a[1])
    return 0;
    return 1;
}
void points(int a[],int b[], float pt[])
{
    pt[0]=-(b[1]*a[2]-a[1]*b[2])/(b[0]*a[1]-a[0]*b[1]);
    pt[1]=(b[0]*a[2]-a[0]*b[2])/(b[0]*a[1]-a[0]*b[1]);
}
float length(float pt1[],float pt2[])
{
    return sqrt(pow((pt1[0]-pt2[0]),2)+pow((pt1[1]-pt2[1]),2));
}
float area(float pt1[],float pt2[],float pt3[])
{
    float area;
    area=(pt1[0]*(pt2[1]-pt3[1])+pt3[0]*(pt1[1]-pt2[1])+pt2[0]*(pt3[1]-pt1[1]))/2;
    return area>0?area:-area;
}
int main()
{
    int a[3],b[3],c[3];
    float pt1[2],pt2[2],pt3[2];
    int i;
    printf("enter coefficients\nLine1:\n");
    for(i=0;i<3;i++)
    scanf("%d", &a[i]);
    printf("Line2:\n");
    for(i=0;i<3;i++)
    scanf("%d", &b[i]);
    printf("Line3:\n");
    for(i=0;i<3;i++)
    scanf("%d", &c[i]);
    if(chk(a,b)==0)
    {
        printf("Line 1 and 2 are parallel");
    }
    else
    if(chk(c,b)==0)
    {
        printf("Line 2 and 3 are parallel");
    }
    else
    if(chk(a,c)==0)
    {
        printf("Line 1 and 3 are parallel");
    }
    else
    {
        points(a,b,pt1);
        points(b,c,pt2);
        points(a,c,pt3);
        printf("Points of intersection between 1 and 2: (%lf,%lf)\n",pt1[0],pt1[1]);
        printf("Points of intersection between 2 and 3: (%lf,%lf)\n",pt2[0],pt2[1]);
        printf("Points of intersection between 1 and 3: (%lf,%lf)\n",pt3[0],pt3[1]);
        printf("side lengths: %lf, %lf, %lf\n", length(pt1,pt2), length(pt2,pt3), length(pt1,pt3));
        printf("Area: %lf", area(pt1,pt2,pt3));
    }
    printf("\n");
    
    return 0;
}