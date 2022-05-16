/*
Tushar Kumar
21CH30035
Chemical Engineering
Section 3
Code Blocks
Windows 10
*/
#include<stdio.h>
int main()
{
    int n,i;
    printf("Please enter the number of cooridnate you want to enter: ");
    scanf("%d",&n);
    double x[n], y[n];
    printf("Enter x co ordinates: ");
    for(i=0;i<n;i++)
    {
        scanf("%lf",&x[i]);
    }
    printf("Enter y co ordinates: ");
    for(i=0;i<n;i++)
    {
        scanf("%lf",&y[i]);
    }
    printf("\nx coordinates are: ");
    for(i=0;i<n;i++)
    {
        printf("%.2lf ",x[i]);
    }
    printf("\ny coordinates are: ");
    for(i=0;i<n;i++)
    {
        printf("%.2lf ",y[i]);
    }
    double xm=0,ym=0,slopenum=0,slopedeno=0;
    for(i=0;i<n;i++)
    {
        xm=xm+x[i]/n;
    }
    for(i=0;i<n;i++)
    {
        ym=ym+y[i]/n;
    }
    for(i=0;i<n;i++)
    {
        slopenum=slopenum+(x[i]-xm)*(y[i]-ym);
        slopedeno=slopedeno+(x[i]-xm)*(x[i]-xm);
    }
    double m,b;
    m=slopenum/slopedeno;
    b=ym-(m * xm);
    if(slopedeno==0)
    {
        printf("The Eqaution: x= 0");
    }
    else
    {
        if(b>=0)
            printf("\nThe Equation: y = %.2lfx + %.2lf",m,b);
        else if(b<0)
            printf("\nThe Equation: y = %.2lfx - %.2lf",m,b*-1);

    }




}
