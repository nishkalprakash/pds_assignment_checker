/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. : 9
Description: finding netpay of employees
*/

#include <stdio.h>

//structure definition
struct Employee{
	char c[25];
	float wpd;
	int days;
};

void NetPay(struct Employee *p, int n){
	float netpay[n];
	float bp, hra, ta;
	//calculating net pay with given conditions
	for(int i=0; i<n; i++){
		bp=hra=ta=0.0;
		bp=((p+i)->wpd)*((p+i)->days);
		if(bp<1000)
			hra=0.12*bp;
		else
			hra=0.2*bp;
		if((p+i)->days > 19)
			ta=0.1*bp;
		else ta=0;
		netpay[i]=bp+hra+ta;
	}
	for(int i=0; i<n; i++){
		printf("Name : %s\n", (p+i)->c);
		printf("Netpay : %f\n", netpay[i]);	
	}
	
}

int main(){
	int n;
	printf("Enter number of employees = ");
	scanf("%d", &n);
	struct Employee e[n]; //array of employees of type struct Employee
	printf("Enter details of each employee as Name Wage/day Days\n");
	for(int i=0; i<n; i++){
		printf("%d)", i+1);
		scanf("%s %f %d", e[i].c, &e[i].wpd, &e[i].days);
	}

	NetPay(e, n); //passing array and size

	return 0;
}