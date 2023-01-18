/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 9
Description : Program to create and print a book of employees*/

#include <stdio.h>

int n;

typedef struct{  //defining a new structure employee
	char name[30];
	float wages;
	int days;
} employee;

employee read(employee A[]){  //function to fill an array of employees
	int i;
	for (i=0; i<n; i++){
		printf("Enter the name of the employee[%d] = ", i+1);
		scanf("%s", A[i].name);
		printf("Enter wages/day = ");
		scanf("%f", &A[i].wages);
		printf("Number of days present for the employee[%d] = ", i+1);
		scanf("%d", &A[i].days);
	}
}

void print(employee A[]){  //function to print name and salary of each employee
	float bp, hra, ta, salary;
	int j;
	for (j=0;j<n;j++){
		bp=0, hra=0, ta=0, salary=0;
		printf("Name = %s\n", A[j].name);
		bp=A[j].wages*A[j].days;
		if (bp<1000) hra=0.12*bp;
		else hra=0.2*bp;
		if (A[j].days>19) ta=0.1*bp;
		salary=bp+hra+ta;
		printf("Netpay: %.2f\n\n", salary);
	}
}

int main(){
	printf("Enter the total number of employee(s)= ");
	scanf("%d", &n);
	employee emp[n];
	read(emp);
	print(emp);
	return 0;
}

