/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: Lab test 1-Q4
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
	int x[10000],y[10000];
	int n;
	printf("Number of Data Points:");
	scanf("%d",&n);
	printf("x-coordinates:");
	int i;
	for(i = 0;i < n;i++){
		scanf("%d",&x[i]);
	}
	printf("y-coordinates:");
	for(i = 0;i < n;i++){
		scanf("%d",&y[i]);
	}
	int sumx=0,sumy=0;
	for(i = 0;i < n;i++){
		sumx += x[i];
		sumy += y[i];
	}
	double xbar = ((double)sumx)/n,ybar = ((double)sumy)/n;
	double numeratorSlope = 0,denominatorSlope = 0;
	for(i = 0;i < n;i++){
		numeratorSlope += (x[i] - xbar)*(y[i] - ybar);
		denominatorSlope += (x[i] - xbar)*(x[i] - xbar);
	}
	double m = numeratorSlope/denominatorSlope;
	double b = ybar - m*xbar;
	printf("m = %lf, b = %lf, line equation y = %lfm + %lf",m,b,m,b);

	return 0;
}
