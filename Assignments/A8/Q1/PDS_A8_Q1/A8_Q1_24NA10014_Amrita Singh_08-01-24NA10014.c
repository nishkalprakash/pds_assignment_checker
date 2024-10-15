//amrita singh
//24NA10014
#include<stdio.h>
#include<math.h>
//writing a recursive function to count digits
int digits(int n){
	if(n==0)  //applying the base case
	return 0;
	else{
	return 1+digits(n/10);}}  //recusively calling the function
	
//recursive function is palindrome


int ispalin(int n,int total){
	if(n%10==0)
	return 0;
	if(n%10!=(n/(int)pow(10,total-1)))//base caase
	return -1;
	if(n%10==(n/(int)pow(10,total-1)))
	return ispalin((n%(int)pow(10,total-1))/10,total-2);//recursion
	}
	
	
	

int main()
		
{
	int n;
	printf("\nenter the number");  //input
	scanf("%d",&n);
	int digit=digits(n);//calling function
	printf("\nthe total digits in %d is %d",n,digit);
	if(ispalin(n,digit)==0)
	printf("\nis palindrome");
	if(ispalin(n,digit)==-1)
	printf("\nnot palindrome");}
