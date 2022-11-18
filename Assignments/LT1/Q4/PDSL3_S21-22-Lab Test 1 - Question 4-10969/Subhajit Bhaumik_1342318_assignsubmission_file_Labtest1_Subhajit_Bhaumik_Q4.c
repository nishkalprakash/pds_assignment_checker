/*
Name:Subhajit Bhaumik
Sec:3
Dept:ME
Roll no. 21ME10081
*/

#include<stdio.h>
int main()
{
    int n=10,count;
    float mean1,mean2,d1,d2,sum1=0,sum2=0;
    float x[10],y[10];
    float a=0,k=0,m=0,b=0;
    printf("x-coordinates:");
    for(count=0;count<n;++count){
        scanf("%f",&x[count]);
        sum1+=x[count];
        }
    mean1=sum1/n;
    printf("\nThe mean is %5.2f\n\n",mean1);
    printf("y-coordinates:");
    for(count=0;count<n;++count){
        scanf("%f",&y[count]);
        sum2+=y[count];
        }
    mean2=sum2/n;
    printf("\nThe mean is %5.2f\n\n",mean2);
    for(count=0;count<n;++count){
    d1=x[count]-mean1;
    printf("i=%d k=%5.2f d1=%5.2f\n",count+1,x[count],d1);
    d2=y[count]-mean2;
    printf("i=%d k=%5.2f d2=%5.2f\n",count+1,y[count],d2);}
    for(count=0;count<n;++count){
        d1=x[count]-mean1;
        a+=d1*d1;
    }
    printf("a=%f\n",a);
    for(count=0;count<n;++count){
        d1=x[count]-mean1;
        d2=y[count]-mean2;
        k+=d1*d2;
    }
    printf("k=%f\n",k);
    m=k/a;
    printf("m=%.1f\n",m);
    b=mean2-m*mean1;
    printf("b=%.1f\n",b);
    printf("line equation y=%.1fx+%.1f",m,b);

    return 0;


}
