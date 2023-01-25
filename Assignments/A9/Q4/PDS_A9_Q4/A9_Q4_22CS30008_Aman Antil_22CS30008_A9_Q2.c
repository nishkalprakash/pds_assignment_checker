
/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 9
Description : Program to find total wage
*/
#include <stdio.h>
#include<stdlib.h>
typedef struct{
	char nm[100];
	float wd;
	int dp;
} detl; //structure for mployee detail
detl emp[100];
detl getdet(detl a){
	scanf("%s", a.nm);
	scanf("%f", &a.wd);
	scanf("%d", &a.dp);
	return a;
} //fuction for taking input
void netpay(detl emp[],int n){
	for(int i=0;i<n;i++){
		float bp=(emp[i].wd)*(emp[i].dp);
		float tot=0;
		if(bp<1000) tot=bp+(0.12)*bp;
		else tot=bp+(0.20)*bp;
		if(emp[i].dp>19) tot=tot+(0.1)*bp;
		printf("Name: %s \nNetPay: %.2f \n \n", emp[i].nm, tot);
	}
}//function to calculate netpay
int main(){
	int n;
	printf("Enter total number of employee(s) = ");
	scanf("%d", &n);
	printf("Name wage days : \n");
	for(int i=0;i<n;i++) emp[i]=getdet(emp[i]);
	netpay(emp, n);
	return 0;
}
