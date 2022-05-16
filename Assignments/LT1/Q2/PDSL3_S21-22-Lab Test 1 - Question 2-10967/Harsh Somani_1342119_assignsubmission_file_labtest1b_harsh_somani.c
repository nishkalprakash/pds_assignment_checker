/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x, f, d_f, e, y, z;
    int it;
    scanf("%f%f",&x,&z);

    for(it=1;e>=z,it<=20;it++)
    {
    f= pow(x,3)-25;
    d_f= 3*x*x;
    y=x-(f/d_f);
    e=fabs(y-x);
    printf ("itration %d, x0=%f, x1=%f, error=%f \n",it,x,y,e);
    if (e<z) break;
    x=y;
    }
    printf("square root=%f",y);
}
