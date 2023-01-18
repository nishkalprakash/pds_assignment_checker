/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 9
Description : Employee details input and calculating netpay
*/

#include <stdio.h>											// Includes the standard IO header file

struct employee{											// employee structure
	char emp_name[100];
	int wages_p_day;
	int num_days_present;
};

void netPay(struct employee emp){
	float bp, hra, ta, net;									// defining variables

	bp = emp.wages_p_day * emp.num_days_present;
	hra = bp < 1000 ? 0.12 * bp : 0.20 * bp;				// if bp < 1000, then 12% of bp, else 20%bp
	ta = emp.num_days_present > 19 ? 0.10 * bp : 0;			// if days_present > 19, then 10% of bp else 0
	net = bp + hra + ta;									// total amount
	printf("Name : %s\nNetpay: %f\n", emp.emp_name, net);
}

int main() {
	struct employee emp;									// declaring variables
	int num_employee;
	printf("Enter the total number of employee(s) = ");
	scanf("%d", &num_employee);
	for(int i = 0; i<num_employee; i++){
		printf("Enter name of employee [%d] = ", i+1);
		scanf("%s", emp.emp_name);
		printf("Enter wages/day = ");
		scanf("%d", &emp.wages_p_day);
		printf("Enter number of days present for employee [%d] = ", i+1);
		scanf("%d", &emp.num_days_present);
		netPay(emp);
	}
	return 0;
}