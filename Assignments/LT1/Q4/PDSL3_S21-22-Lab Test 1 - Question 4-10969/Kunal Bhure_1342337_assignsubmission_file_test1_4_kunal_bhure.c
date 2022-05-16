#include<stdio.h>
int main()
{
    int i,n,a[100],b[100],sumx=0,sumy=0;
    float m1,m2,X,Y,sum1=0,sum2=0,m,c;
    printf("enter n:");
    scanf("%d",&n);
    printf("x coordinates:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        sumx= sumx+a[i];
    }
    printf("y coordinates:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&b[i]);
        sumy= sumy+b[i];
    }
    X=(sumx)/n;
    Y=sumy/n;
    for(i=0; i<n; i++)
    {
        m1=(a[i]-X)*(b[i]-Y);
        sum1=sum1+m1;
    }
    for(i=0; i<n; i++)
    {
        m2=(a[i]-X)*(a[i]-X);
        sum2= sum2+m2;
    }
    m=sum1/sum2;
    c= Y-m*X;
    printf("m=%f",m);
    printf("c=%f",c);
    printf("Equation of line is y=%0.1fx+%.0f",m,c);
    return 0;
}
