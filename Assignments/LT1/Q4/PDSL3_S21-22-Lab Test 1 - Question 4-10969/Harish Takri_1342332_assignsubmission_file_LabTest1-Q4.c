/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
    int main(){
    int X[10],Y[10];
    int i,n=10;
    float x_bar=0,y_bar=0;
    float num=0,den=0;
    printf("Enter x-coordinates : ");
	for(i=0;i<n;i++){
		scanf("%d",&X[i]);
		x_bar+=X[i];
	}
	printf("Enter y-coordinates : ");
	for(i=0;i<n;i++){
		scanf("%d",&Y[i]);
		y_bar+=Y[i];
	}

    x_bar/=n;
    y_bar/=n;
    for(i=0;i<n;i++){
    num+=(X[i]-x_bar)*(Y[i]-y_bar);
    den+=(X[i]-x_bar)*(X[i]-x_bar);
    }

    float m=num/den;
    float b=y_bar-(m*x_bar);
    printf("m = %f & b = %f \n",m,b);
    printf("Equation of the line = %fx + %f\n",m,b);


}
