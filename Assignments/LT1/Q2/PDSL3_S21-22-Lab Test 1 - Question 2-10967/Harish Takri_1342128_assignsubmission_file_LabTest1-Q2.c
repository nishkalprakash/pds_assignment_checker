/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
int main(){
    float X0,X1,E,err;
    int mxlter;
    printf("Enter the value of X0 : ");
    scanf("%f",&X0);
    printf("Enter value of E(tolerance limit) : ");
	scanf("%f",&E);
	printf("Enter value of MAX Iterations : ");
	scanf("%d",&mxlter);
	int i=1;
	while(i<=mxlter){
		printf( "Iteration\tx0\t\tx1\t\tError\n" );
		X1=X0-((X0*X0*X0)-25)/(3*X0*X0);
		err=X0-X1;
		printf("%d\t\t%f\t%f\t%f\n",i,X0,X1,err);
		if(err<E){
			break;
		}
		X0=X1;
		i++;
        }
        printf("The square root id %f \n",X0);

}
