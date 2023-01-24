/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 9
Description: Program to create records for n employees, then calculate and print their salaries based on various factors. An array of struct type has been used to store the records of every employee.

*/

#include <stdio.h>

typedef struct { // declaring employee structure
	char name[100]; // character array for name
	int wage, days; // wage, days of int type
} employee; 

void netpay (employee* a) { // netpay function to calculate and print salaries
	int bp = a -> wage * a -> days; // base pay
	float hra = (bp < 1000) ? 0.12 * bp : 0.20 * bp; // hra as per given conditions
	float ta = (a -> days > 19) ? 0.10 * bp : 0; // ta as per given conditions
	printf("Name: %s\n", a -> name); // printing name
	printf("Netpay: %.2f", bp + hra + ta); // calculating and printing salary
}

int main() {
	int n; // number of employees
	printf("Enter number of employees: ");
	scanf("%d", &n); // taking input for number of employees
	employee arr[n]; // declaring array of employee structure
	for (int i = 0; i < n; i++) { // running loop for taking input for every employee
		printf("Enter name for employee %d: ", i + 1);
		scanf("%s", (arr[i].name));
		printf("Enter wages for employee %d: ", i + 1);
		scanf("%d", &(arr[i].wage));
		printf("Enter number of working days for employee %d: ", i + 1);
		scanf("%d", &(arr[i].days));
	}
	for (int i = 0; i < n; i++) { // running loop for printing salaries
		netpay (&arr[i]); // calling netpay function for each array element
		printf("\n\n");
	}
	return 0;
}
