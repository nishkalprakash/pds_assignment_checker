/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<math.h>
#include<limits.h>

void intersection(int l1[],int l2[],int l,int h){
	float p=INT_MIN;
	if(l2[0]!=0){
		p=l1[0]/l2[0];
	}
	float q=INT_MIN;
	if(l2[1]!=0){
		q=l1[1]/l2[1];
	}
	float r=INT_MIN;
	if(l2[2]!=0){
		r=l1[2]/l2[2];
	}
	if(p==q){
		if(q!=r){
			printf("Lines are parallel\n");
			return;
		}
	}
	float u=((l1[1]*l2[2])-(l2[1]*l1[2]))/((l1[0]*l2[1])-(l2[0]*l2[1]));        // points of intersection
	float y=((l2[0]*l1[2])-(l1[0]*l2[2]))/((l1[0]*l2[1])-(l2[0]*l1[1]));
	printf("Point of intersection between %d and %d = (%f , %f)\n",l,h,u,y);

}

int main(){
	int l1[3],l2[3],l3[3];  // coefficients of 3 line...
	int i;
	printf("Enter the coefficients (a,b,c) of three lines : \n");
	printf("Line 1 : ");
	for(i=0;i<3;i++){
		scanf("%d",&l1[i]);
	}
	printf("Line 2 : ");
	for(i=0;i<3;i++){
		scanf("%d",&l2[i]);
	}
	printf("Line 3 : ");
	for(i=0;i<3;i++){
		scanf("%d",&l3[i]);
	}
	intersection(l1,l2,1,2);
	intersection(l2,l3,2,3);
	intersection(l3,l1,3,1);
}
