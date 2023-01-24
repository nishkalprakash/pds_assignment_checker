/*
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :9
 Question No :5
 Description: to find the salary details of an employee
 */


#include <stdio.h>

typedef struct employee{
   char name[20];
   int wage;
   int days;
}employee;//defining structure employee

float netPay(employee e){
   int w=e.wage;
   int d=e.days;
   int BP=w*d;//basic pay
   float HRA=0.0;
   if(BP<1000)
    HRA= 0.12 * BP;
   else
   	HRA= 0.20 * BP;
   float TA=0.0;
   if(d>19)
    TA=0.10 * BP;
   else
   	TA=0;
   return BP + HRA + TA;
}

int main(){
	int n;
	printf("total number of employees");
	scanf("%d",&n);
	struct employee ar[n];
	printf("NAME WAGE DAYS");
	for(int i=0;i<n;i++){
        scanf("%s %d %d",ar[i].name,&ar[i].wage,&ar[i].days);
	}
    for(int j=0;j<n;j++){
        printf("name: %s ",ar[j].name);
        printf("Netpay: %f",netPay(ar[j]));
        printf("\n \n");
	}
}