/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 9
QUESTION : to create a struct and calculate netpay of the employee

*/
#include<stdio.h>	//including important header files
#include<math.h>
#include<stdlib.h>


//creating a struct variable employees
typedef struct employee{
	char name[100];
	double wpd;
	int nod;	
}emp;


//function to calculate net pay
double netpay(int nod,double wpd){
	double BP=wpd*nod,HRA,TA=0,netsal;

	//calculating as per the requirements as per conditions
	if(BP<1000){
		HRA=0.12*BP;			
	}
	else{					//here BP is basic pay
		HRA=0.2*BP;
	}
	if(nod>19){
		TA=0.10*BP;
	}
	netsal=BP+HRA+TA;
	return netsal;				//returning netsal
}

int main(void){
	int n;
	scanf("%d",&n);				//scannning value of n from user
	emp arr[100];				//creating a structure array
											
	printf("Name Wage Days:\n");
	for(int i=0;i<n;i++){
		scanf("%s %lf %d",arr[i].name,&arr[i].wpd,&arr[i].nod);			//storing values in the structure array
	}

	for(int i=0;i<n;i++){								//for loop to calculate netsal for every name/employee in array
		printf("Name : %s\n",arr[i].name);					
		double x=netpay(arr[i].nod,arr[i].wpd);					//calling netpay functionss
		printf("Netpay : %lf\n\n",x);					
	}
	
	
	return 0;
}
