/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    float x,y,x1=0,y1=0,m,b,p=0,q=0;
    int a[100];
    int c[100];
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%f",&x);
        a[i]=x;
    }
    for (j=0;j<n;j++)
    {
        scanf("%f",&y);
        c[j]=y;
    }
    for(i=0;i<n;i++) x1=x1+a[i];
    for(j=0;j<n;j++) y1=y1+c[j];
    x1=x1/n;
    y1=y1/n;
    for(j=0;j<n;j++)
        p=p+(c[j]-y1)*(a[j]-x1);
    for(j=0;j<n;j++)
        q=q+(a[j]-x1)*(a[j]-x1);
        printf("%f %f",p,q);
    m=p/q;
    b=y1-m*x1;
    printf("line eq y=%dx+%d",m,b);
}
