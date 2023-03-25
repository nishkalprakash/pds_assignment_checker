#include<stdio.h>
int main()

{
    double a,b,c,d,e,f,g,h,i,j,k,l;
    printf("enter coordinates of point X\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("enter coordinates of point Y\n");
    scanf("%lf%lf%lf",&d,&e,&f);
    printf("enter coordinates of point Z\n");
    scanf("%lf%lf%lf",&g,&h,&i);
    printf("coordinates of point X is %lf %lf %lf\n",a,b,c);
    printf("coordinates of point Y is %lf %lf %lf\n",d,e,f);
    printf("coordinates of point Z is %lf %lf %lf\n",g,h,i);
    j=(d-a)/(g-a);
    k=(e-b)/(h-b);
    l=(f-c)/(i-c);
    if ((j==k)&&(k==l))
        printf("the three points are collinear");
    else
        printf("they are not collinear");
    return 0;
}
