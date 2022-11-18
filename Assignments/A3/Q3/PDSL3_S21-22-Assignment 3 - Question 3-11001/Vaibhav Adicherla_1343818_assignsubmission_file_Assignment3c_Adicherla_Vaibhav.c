/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include<math.h>
float area(float a[3], float b[3], float c[3]);
{
    scanf("%f%f%f",a[3],b[3],c[3]);
    area = (d[0](e[1] - f[1]) + e[0](f[1] - d[1]) + f[0]*(d[1] - e[1]))/2;


}
float* intersection(float a[3],float b[3]);
scanf("%f%f", a[3],b[3]);


float der = a1*b2-a2*b1;
if( der == 0)
    printf(" the lines are parallel");
    float der = a2*b3-a3*b2;
    if( der == 0)
    printf(" the lines are parallel");
    else (d = intersection(a,b);
        e = intersection(b,c);
        f = intersection(c,a);)


#include<stdio.h>
float* intersection(float a[],float b[]);
int main()
{
        float a[3],b[3],c[3];
        float *d,*e,*f;
        int i;
        for(i=0;i<3;i++)
                scanf("%f",&a[i]);
        for(i=0;i<3;i++)
                scanf("%f",&b[i]);
        for(i=0;i<3;i++)
                scanf("%f",&c[i]);
        d = intersection(a,b);
        e = intersection(b,c);
        f = intersection(c,a);
        printf("%f %f",e[0],e[1]);
        float area = (d[0](e[1] - f[1]) + e[0](f[1] - d[1]) + f[0]*(d[1] - e[1]))/2;
        if(area<0)
                area = -area;
        printf("%f",area);
}
float* intersection(float a[],float b[])
{
        static float ans[2];
        ans[0] = (a[2]*b[1] - a[1]*b[2])/(a[0]*b[1] - a[1]*b[0]) ;
        ans[1] = (a[2]*b[0] - a[0]*b[2])/(a[1]*b[0] - a[0]*b[1]) ;
        printf(" %f %f ",ans[0],ans[1]);
        return ans;
        printf(" %f %f ",ans[0],ans[1]);
}
float area








