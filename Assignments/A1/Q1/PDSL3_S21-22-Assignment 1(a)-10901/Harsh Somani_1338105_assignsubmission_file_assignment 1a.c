/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    int a, u, alpha;
    float t, d, s;
    scanf("%d%d%d%f",&a,&u,&alpha,&t);
    printf("point A = (%d,0)\n",a);
    printf("initial speed =%d\n",u);
    printf("acceleration =%d\n",alpha);
    printf("time=%f",t);
    s = (u*t)+(0.5*alpha*t*t);
    d = s+a;
    printf("distance from origin is %f",d);

}
