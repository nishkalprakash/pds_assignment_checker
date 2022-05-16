#include<stdio.h>
int main()
{
    float x[10],y[10];
    float xsum=0,ysum=0;
    float xavg,yavg,m,b;
    float temp1=0,temp2=0;
    int i;
    printf("Enter 10 x coordinates: ");
    for(i=0;i<10;i++){
        scanf("%f",&x[i]);
    }
    printf("Enter 10 y coordinates: ");
    for(i=0;i<10;i++){
        scanf("%f",&y[i]);
    }

    // average calculation
    for(i=0;i<10;i++){
        xsum=xsum+x[i];
        ysum=ysum+y[i];
    }

    xavg=xsum/10;
    yavg=ysum/10;

    //slope calculation
    for(i=0;i<10;i++){
        temp1=temp1+(x[i]-xavg)*(y[i]-yavg);
        temp2=temp2+(x[i]-xavg)*(x[i]-xavg);
    }
    m=temp1/temp2;

    // intercept calculation

    b=yavg-(m*xavg);

    printf("m=%5.1f,b=%5.1f,line equation y= %5.1f x+%5.1f",m,b,m,b);


    return 0;
}
