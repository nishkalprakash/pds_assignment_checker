/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3
Test : 1d
*/
#include<stdio.h>

int main(){
    float m,b,meanx,meany,sumx=0,sumy=0,sum1=0,sum2=0,term1,term2;
    float x[10],y[10]; //as it is mentioned that number of data points is fixed, I assume it to be 10, for generality I assume coordinates to be real numbers
    int i;
    //step 1
    printf("x -coordinates: ");
    for(i=0;i<10;i++){
        scanf("%f",&x[i]);
        sumx=sumx+x[i];
    }
    printf("y -coordinates: ");
    for(i=0;i<10;i++){
        scanf("%f",&y[i]);
        sumy=sumy+y[i];
    }
    meanx=sumx/10.0;
    meany=sumy/10.0;
    //step 2
    for(i=0;i<10;i++){
        term1=((x[i]-meanx)*(y[i]-meany));
        sum1=sum1+term1;
    }
    for(i=0;i<10;i++){
        term2=((x[i]-meanx)*(x[i]-meanx));
        sum2=sum2+term2;
    }
    m=sum1/sum2;
    //step 3
    b=((meany)-(m*meanx));
    printf("m= %.2f, b= %.2f, line equation y=%.2fx+%.2f",m,b,m,b);//as nothing in mentioned in question about data type I assume float and print upto 2 decimal places

 return 0;
}

