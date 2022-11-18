/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 1d
Package- stdio.h
*/
#include <stdio.h>

int main()
{  int X[10];int Y[10];
int sumX=0; int sumY=0;
printf("Enter 10 x co-ordinates and then 10 y co-ordinates in seperate lines:\n");
for(int i =0;i<10;i++)
{
    scanf("%d",&X[i]);
    sumX+=X[i];
}
for(int i =0;i<10;i++)
{
    scanf("%d",&Y[i]);
    sumY+=Y[i];
}

float meanX= sumX/10.0;
float meanY= sumY/10.0;
float num=0.0;
float denom=0.0;
for(int i = 0;i<10;i++)
{
num+= (X[i]-meanX)*(Y[i]-meanY);
denom+= (X[i]-meanX)*(X[i]-meanX);
}
float m = num/denom;
float b = meanY- m*meanX;
printf("m=%0.1f, b=%0.1f, line equation y = %0.1fx + %0.1f",m,b,m,b);

    return 0;
}

