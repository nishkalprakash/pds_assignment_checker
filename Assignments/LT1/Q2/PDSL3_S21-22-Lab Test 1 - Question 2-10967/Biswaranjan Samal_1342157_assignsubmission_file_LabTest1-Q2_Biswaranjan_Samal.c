/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: Lab test 1 Q2
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	double x0,e;
	int maxIteration;
	printf("x0 = ");
	scanf("%lf",&x0);
	printf("e = ");
	scanf("%lf",&e);
	printf("maxIteration = ");
	scanf("%d",&maxIteration);
	int i;
	double x1,error,swap;
	printf("Iteration\tx0\t\tx1\t\tError\n");
	for(i = 0;i < maxIteration;i++){
		x1 = x0 - ((x0*x0*x0 - 25)/(3*x0*x0));
		error = x1-x0;
		if(error < 0)
			error = error*(-1);
		printf("%d\t\t%lf\t%lf\t%lf\n",i+1,x0,x1,error);
		if(error < e)
			break;
		swap = x0;
		x0 = x1;
		x1 = swap;
	}
	printf("The square root is %lf",x1);
	return 0;
}
