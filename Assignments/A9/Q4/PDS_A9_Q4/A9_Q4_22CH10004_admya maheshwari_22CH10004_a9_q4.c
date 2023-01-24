/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 9
	   DESCRIPTION    : A C program to find the net pay of the employees by the inputed details
*/

#include<stdio.h>
// structure to hold the details of employees
struct employees{

	char name[50];
	float wpd;
	int ndp;
};
// function to count the net pay of the employees

void net_pay(int ndp,float wpd){

	float BP=wpd*ndp,HRA,TA;
	float net_salary;
	
	if(BP<1000){
		HRA = 0.12*BP;
	}
	else{
		HRA = 0.20*BP;
	}
	
	if(ndp>19){
		TA = 0.10*BP;
	}

	else{
		TA=0;	
	}
	
	net_salary = BP+HRA+TA;

	printf("the net salary is %f",net_salary);
}

int main(){
	int n;

	//input the number of employees 
	printf("enter the no. of employees");
	scanf("%d",&n);
	
	// add the details pf employees 
	for(int i=1;i<=n;i++){
	struct employees ei;
	printf(" the name of employee no.%d is ",i);
	scanf("%s",&ei.name);
	
	printf("enter the wages per day of employee no.%d:",i);
	scanf("%f",&ei.wpd);
	printf("enter the wages number of day present employee no.%d:",i);
	scanf("%d",&ei.ndp);

	//function call to get the net pay of the employees
	net_pay(ei.ndp,ei.wpd);
	}


	return 0;
}
