/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 9
 Description : write a program to find the  net salary of the employee
 */

#include<stdio.h>
#include<math.h>
#include<string.h>
#define ll long long 

struct salary      //defining the structure
{
	char name[50];
	double wage;
	float days;
	double net;

};
struct salary m ;
float netpay(struct salary m){         //making a funcion to calculate net salary
	double bp,hra,ta; 
	bp=(m.wage)*(m.days);
	if(bp<1000){
		hra=0.12*bp;
	}
	else{
		hra=0.2*bp;
	}
	if(m.days>19){
		ta=0.1*(bp);
	}
	else{
		ta=0;
	}
	return bp+hra+ta;
	
}

int main(){
	int n;
	scanf("%d",&n);
	
	struct salary emp[n];
	printf("Name Wage Days: \n");
	for(int i=0;i<n;i++){
		scanf("%s %lf %f",emp[i].name,&emp[i].wage,&emp[i].days);
		

	}
	for(int i=0;i<n;i++){
		printf("Name: %s \nNetpay: %f ",emp[i].name,netpay(emp[i]));
		printf("\n");

		

	}

	
}