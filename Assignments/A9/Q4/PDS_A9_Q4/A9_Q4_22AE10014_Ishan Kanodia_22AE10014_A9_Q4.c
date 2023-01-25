
/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 9
Question No. : 4
Description : Finding out the net salary by using given factors
*/

#include<stdio.h>

struct employee{							//Defining a structure of employee information
	char name[50];
	int wage;
	int days;
};

int netPay(float BP,float HRA,float TA){				//Creating a function to print the net pay
	printf("Netpay : %f\n",(BP + HRA + TA));
}

int main(){
	struct employee arr[100];					//Array of structures
	float BP,HRA,TA;
	int n;
	printf("Enter the number of employees : ");
	scanf("%d",&n);
	printf("Name wage days:\n");
	for(int i=0;i<n;i++){
		scanf("%s %d %d",arr[i].name,&arr[i].wage,&arr[i].days);//Input
	}
	for(int i=0;i<n;i++){						//Final computing
		BP=(arr[i].wage)*(arr[i].days);
		if(BP<1000)HRA=0.12*BP;
		else HRA=0.2*BP;
		if(arr[i].days>19)TA=0.1*BP;
		else TA=0;
		printf("Name : %s\n",arr[i].name);
		netPay(BP,HRA,TA);					//Function call
	}
return 0;
}
