/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */

#include <stdio.h>
#include <math.h>

void main(){
    float x[100],y[100];
    int n,i;
    float xm=0,ym=0;
    float m=0,m1=0,m2=0,b;

    printf("enter the number of coordinates you wish to enter:");
    scanf("%d",&n);
    printf("x-coordinates: ");
    for (i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    printf("y-coordinates: ");
    for (i=0;i<n;i++){
        scanf("%f",&y[i]);
    }

    for (i=0;i<n;i++){
        xm+=x[i]/((float)n);
        ym+=y[i]/((float)n);
    }

    for (i=0;i<n;i++){
        m1+=(x[i]-xm)*(y[i]-ym);
        m2+=pow(x[i]-xm,2);
    }
    m=m1/m2;
    b=ym-m*xm;

    printf("m= %f\n",m);
    printf("b= %f\n",b);
    printf("y= %fx + %f",m,b);
}
