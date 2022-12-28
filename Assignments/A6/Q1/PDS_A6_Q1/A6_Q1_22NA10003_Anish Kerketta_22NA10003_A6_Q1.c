/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 6-1
Description :The print a series
*/
#include<stdio.h>
int print_term(int x)						
{
	int t=0;
	if(x==0)
		return x;
	else if(x==1)
		return x;
	else if(x==2)
		return x;
	else
		t=3*print_term(x-1)*print_term(x-2)-2*print_term(x-2)*print_term(x-3)+1;			//Calculating
	printf("%d",t);
	return t;
}
int main()
{
	int k;
	printf("Enter the number of terms:\n");								//Write
	scanf("%d",&k);
	print_term(k);

}
