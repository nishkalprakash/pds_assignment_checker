/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 9
Discription : To find net salary of an employee
*/
#include<stdio.h>
#include<stdlib.h>
struct employee{    			//declaration of struct storing employee data
	char name[25];
	int wage;
	int days;
};
struct employee readem(){ 		//function to read struct for each employee 
	struct employee a;
	scanf("%s",a.name);
	scanf("%d",&a.wage);
	scanf("%d",&a.days);
	return a;}
float netpay(struct employee a){	//calculates the netpay of each employee based on the given conditions
	float netpay,BP,HRA,TA;
	BP=(float)a.wage*a.days;
	HRA=(BP<1000)?0.12*BP:0.2*BP;
	TA=(a.days>19)?0.1*BP:0; 
	netpay=BP+HRA+TA;
return netpay;}				
int main(){
	int n,i=0;	
	scanf("%d",&n);			//scans number of employees whose netpay is to be calculated
	struct employee x[n];
	printf("Name wage days:\n");	
	for(i=0;i<n;i++)		
		x[i]=readem();		//takes the input of all the data for n employees
	for(i=0;i<n;i++){
	printf("\nName:%s\n",x[i].name);
	printf("Netpay:%0.2f\n",netpay(x[i]));}
return 0;}
