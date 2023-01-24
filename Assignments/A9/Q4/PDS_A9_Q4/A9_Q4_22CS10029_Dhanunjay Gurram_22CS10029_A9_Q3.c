/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:9*/
#include <stdio.h>
typedef struct{
	char name[20];
	int wage_perday;
	int no_ofdays;
}emp_details;
void netpay(char *,int ,int);                                                   
void netpay(char nam[20],int wage,int days){
	int BP;
	float HRA,TA;
	BP=wage*days;
	if (BP<1000) HRA=0.12*BP;
	else HRA=0.2*BP;
	if (days>19) TA=0.1*BP;
	else TA=0;
	printf("Name: %s\nNetpay=%f\n",nam,BP+TA+HRA);
}
int main(){
	int no_ofemp;
	emp_details emps[no_ofemp];                                                     //creating array to store the details of employees
	scanf("%d",&no_ofemp);
	printf("Name wage days:\n");
	for (int i=0;i<no_ofemp;i++){                                                  //taking emp data
		scanf("%s %d %d",emps[i].name,&emps[i].wage_perday,&emps[i].no_ofdays);
	}
	for (int i=0;i<no_ofemp;i++){                                                 //prints netpay of employee
		netpay(emps[i].name,emps[i].wage_perday,emps[i].no_ofdays);
		printf(" \n");
	}
	return 0;
}
