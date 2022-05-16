/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:3,Question 3
*/



#include <stdio.h>
#include <math.h>

double pointOfIntersection(int a1,int b1,int c1,int a2,int b2,int c2){
	return (c1*b2-c2*b1)/(a1*b2 - a2*b1);
}

double distanceFormula(double x1,double x2,double y1,double y2){
	return (sqrt(pow(x2-x1,2) + pow(y2-y1,2)));
}

double area(double len1,double len2,double len3){
	double s = (len1+len2+len3)/2;
	return (sqrt(s*(s-len1)*(s-len2)*(s-len3)));
}

int main(){
	printf("Enter the coefficients (a, b, c) of three lines:\n");
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	printf("Line 1:");
	scanf("%d %d %d",&a1,&b1,&c1);
	printf("Line 2:");
	scanf("%d %d %d",&a2,&b2,&c2);
	printf("Line 3:");
	scanf("%d %d %d",&a3,&b3,&c3);

	if((a1*b2 - a2*b1) == 0){
		if((c1*b2-c2*b1) != 0 || (c1*a2-c2*a1) != 0)
			printf("Lines 1 and 2 are parallel; so no point of intersection");
		else
			printf("Lines 1 and 2 are same; so no unique point of intersection");

		return 0;
	}
	double x1 = pointOfIntersection(a1,b1,c1,a2,b2,c2),y1 = pointOfIntersection(b1,a1,c1,b2,a2,c2);

	if((a2*b3 - a3*b2) == 0){
		if((c2*b3-c3*b2) != 0 || (c2*a3-c3*a2) != 0)
			printf("Lines 2 and 3 are parallel; so no point of intersection");
		else
			printf("Lines 2 and 3 are same; so no unique point of intersection");

		return 0;
	}
	double x2 = pointOfIntersection(a2,b2,c2,a3,b3,c3),y2 = pointOfIntersection(b2,a2,c2,b3,a3,c3);

	if((a3*b1 - a1*b3) == 0){
		if((c3*b1-c1*b3) != 0 || (c3*a1-c1*a3) != 0)
			printf("Lines 3 and 1 are parallel; so no point of intersection");
		else
			printf("Lines 3 and 1 are same; so no unique point of intersection");

		return 0;
	}
	double x3 = pointOfIntersection(a3,b3,c3,a1,b1,c1),y3 = pointOfIntersection(b3,a3,c3,b1,a1,c1);

	printf("Point Of Intersection L1 and L2:(%lf, %lf)\n",x1,y1);
	printf("Point Of Intersection L2 and L3:(%lf, %lf)\n",x2,y2);
	printf("Point Of Intersection L3 and L1:(%lf, %lf)\n",x3,y3);

	double len1 = distanceFormula(x1,x2,y1,y2),len2 = distanceFormula(x2,x3,y2,y3),len3 = distanceFormula(x3,x1,y3,y1);
	printf("Side Lengths: %lf %lf %lf\n",len1,len2,len3);

	printf("Area: %lf",area(len1,len2,len3));
	return 0;
}

