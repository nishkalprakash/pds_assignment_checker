/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 9
description: calculating Net pay of an employee 
*/ 




# include <stdio.h>


typedef struct employee_details{
	char name[50];
	float wpd;
	int days;
	float netpay; 
} emp ;


//a function to calculate net pay 
int calculate_netpay(emp employee) {

	float BP = employee.days * employee.wpd ;
	float HRA;
	if(BP<1000) HRA = (12*BP)/100 ;
	else HRA = (20*BP)/100 ;

	float TA = 0;
	if(employee.days>19) TA = (10*BP)/100 ;

	return BP+HRA+TA ;
}



int main()
{
	int n ;
	printf("enter number of employees \n");
	scanf("%d",&n);
	emp employee[n];

	// a loop to get data of the employee
	for(int i=0 ; i<n ; i++){
		printf("name : ");
		scanf("%s", employee[i].name);
		printf("wages per day : ");
		scanf("%f", &employee[i].wpd);
		printf("no of days the employee was present : ");
		scanf("%d",&employee[i].days);
		
		employee[i].netpay = calculate_netpay(employee[i]);
		
	}



	for(int i =0 ; i<n ;i++)
		printf("-----------------------------------------------------------------\n   Name = %s \n   Netpay = %f \n\n", employee[i].name , employee[i].netpay); 
	


	

	return 0;
}