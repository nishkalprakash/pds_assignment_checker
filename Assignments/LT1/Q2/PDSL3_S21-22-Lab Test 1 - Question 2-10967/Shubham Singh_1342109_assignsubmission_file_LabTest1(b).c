/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 1(b)
*/

#include <stdio.h>
int main()
{
    printf("Enter x0, error value, and max iterations.");
    float x0,E;
    int n;
    float x1;
    int flag=0;
    scanf("%f %f %d",&x0,&E,&n);
    for(int i=1;i<=n;i++)
    {
        float a=x0*x0*x0-25;
        a=a/(3*x0*x0);
        x1=x0-a;
        printf("%f %f\n",x0,x1);
        float e;
        if(x0>x1)
            e=x0-x1;
        else
            e=x1-x0;
        printf("Iteration : %d  x0 : %f  x1 : %f  Error : %f\n",i,x0,x1,e);
        if(e<=E)
        {
            flag=1;
            break;
        }
        x0=x1;
    }
    if(flag==1)
        printf("Final square root : %f",x1);
    else
        printf("Desired accuracy not achieved within given iterations.");
}
