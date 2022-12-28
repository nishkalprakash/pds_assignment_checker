/*
Name          : Admya Maheshwari
sdction       : 14
Roll No.      : 22CH10004
Assignment no.: 6
Description   : A C program to compute the term entered by the user of the function given
*/
#include<stdio.h>
//determination of functions

void print_term(int n);
int term(int n);

int main(){
	int k;
	//take the term till wich ypu want to print term of series

	printf("enter a no. K :");
	scanf("%d",&k);
	
	if (k<=0){
		  printf("invalid input");
		  }

	else{
		print_term(k);
	     }
		return 0;
		}

int term(int n){

		if(n==0||n==1||n==2){
				     return n;					
				     }

		else{
			return 3*term(n-1)*term(n-2)-2*term(n-2)*term(n-3)+1;
			}
		}


void print_term(int n){
	
	for (int i =0;i<n;i++)
		printf("%d \t",term(i));
			}
		
