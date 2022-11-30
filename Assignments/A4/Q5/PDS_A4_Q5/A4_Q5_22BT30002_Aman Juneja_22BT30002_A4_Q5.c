/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Program to find the approximate root of a cubic polynomial.
*/

#include<stdio.h>
#include<math.h>

int main(){

	int a,b,c,d;
	double x=-100000,y=100000,z=0,px,py,pz;
	printf("Enter the coeffficient of x^0: ");
	scanf("%d",&d);
	printf("Enter the coeffficient of x^1: ");
	scanf("%d",&c);
	printf("Enter the coeffficient of x^2: ");
	scanf("%d",&b);
	printf("Enter the coeffficient of x^3 (!=0): ");
	scanf("%d",&a);
	printf("enter two numbers between which root will exist (x<y) : ");
	scanf("%lf %lf",&x,&y);

	px=a*pow(x,3) + b*pow(x,2) + c*pow(x,1) + d*pow(x,0);
	py=a*pow(y,3) + b*pow(y,2) + c*pow(y,1) + d*pow(y,0);
	pz=a*pow(z,3) + b*pow(z,2) + c*pow(z,1) + d*pow(z,0);
	printf("%lf",fabs(pz));
	
	while(fabs(pz)>0.001){
		if(px*py<0){
			z=(y*px-x*py)/(py-px);
			if(px*pz>0){
				x=z;
				printf("%lf",fabs(pz));
			}
			else{
				y=z;
			}
		}
		else{
			printf("enter two numbers between which root will exist (x<y) : ");
			scanf("%lf %lf",&x,&y);	
		}
		
	}

	printf("Root of the polynomial : %lf",z);
return 0;
}
