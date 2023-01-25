10/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:9
Description: This program takes input of the details of workers and return their netpay.
*/
#include<stdio.h>
struct details{																		//Structure to store the details of the workers.
	char name[100];
	int wage;
	int days;
	int net_pay;
};
int netpay(struct details x){														//Function to calculate the netpay of the worker.
	int bp= x.wage*x.days;
	int hrc,ta;
	if(bp>1000){
		hrc = 0.12*bp;
	}
	else{
		hrc = 0.2*bp;
	}
	if(x.days>19){
		ta=0.1*bp;
	}
	else{
		ta=0;
	}
	return bp+hrc+ta;
}
int main(){
	int n;
	scanf("%d",&n);
	struct details var[n];
	for(int i=0;i<n;i++){													//Input details of the workers.
		scanf("%s",var[i].name);
		scanf("%d",&var[i].wage);
		scanf("%d",&var[i].days);
		var[i].net_pay= netpay(var[i]);
	}
	for(int i=0;i<n;i++){													//Print the name and netpay.
		printf("Name: %s \n",var[i].name);
		printf("Netpay: %d",var[i].net_pay);
	}
	return 0;
}