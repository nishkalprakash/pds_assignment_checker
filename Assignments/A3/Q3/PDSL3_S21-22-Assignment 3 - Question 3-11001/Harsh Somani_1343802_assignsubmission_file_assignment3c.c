/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<math.h>
int POI(float p[], float a, float b, float c,float a1, float b1, float c1)
{
    if(b*a1-b1*a==0);
    else
    {
        p[0]=(c1*b-c*b1)/(b*a1-b1*a);
        p[1]=(a*c1-c*a1)/(a*b1-b*a1);
        return(p);
    }
}
float sidel(float x[],float y[])
{
    float d;
    d=sqrt(pow(x[0]-y[0],2)+pow(x[1]-y[1],2));
    return(d);
}
float AREA(float x, float y, float z)
{
    float s,a;
    s=(x+y+z)/2;
    a=sqrt(s*(s-x)*(s-y)*(s-z));
    return(a);
}
int main()
{
    float a,b,c,a1,b1,c1,a2,b2,c2;
    float p1[2],p2[2],p3[2];
    float s1,s2,s3,area;
    scanf("%f%f%f",&a,&b,&c);
    printf("line 1= %f %f %f\n",a,b,c);
    scanf("%f%f%f",&a1,&b1,&c1);
    printf("line 2= %f %f %f\n",a1,b1,c1);
    scanf("%f%f%f",&a2,&b2,&c2);
    printf("line 3= %f %f %f\n",a2,b2,c2);
     if(b*a1-b1*a==0||b1*a2-b2*a1==0||b2*a-b*a2==0)printf("2 line are parallel\n");
    else {POI (p1,a,b,c,a1,b1,c1);
    printf("POI of l1 and l2 is %f,%f\n",p1[0],p1[1]);
     POI (p2,a1,b1,c1,a2,b2,c2);
    printf("POI of l2 and l3 is %f,%f\n",p2[0],p2[1]);
     POI (p3,a2,b2,c2,a,b,c);
    printf("POI of l3 and l1 is %f,%f\n",p3[0],p3[1]);
    s1=sidel(p1,p2);
    s2=sidel(p2,p3);
    s3=sidel(p3,p1);
    printf("side lengths %f %f %f\n",s1,s2,s3);
    area=AREA(s1,s2,s3);
    printf("area %f",area);}
}
