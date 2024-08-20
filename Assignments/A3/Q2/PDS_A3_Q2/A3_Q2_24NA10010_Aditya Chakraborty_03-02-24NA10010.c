//To write a program for bank management systems , to check whether there is sufficient balance or not
// Code creator : Aditya Chakraborty
// Roll No : 24NA10010
#include <stdio.h>
int main() {
	float depo,withd,balance=0;
	printf ("Enter the amount to deposit");
	scanf ("%f", &depo); 
	balance = balance + depo;
	printf ("Deposited balance :%f \n",balance);                // this is to take the deposited amount
	printf ("Enter the amount to withdraw");
	scanf ("%f", &withd);                // this is to take the withdrawal amount 
	if (withd>depo) {
		printf (" Withdraw failed : Balance is insufficient");        //this if else statement is for checking the balance left in the bank account
		} else {
		printf (" Deposited:%f \n Withdraw:%f \n Balance is :%f",depo,withd,depo-withd);
		}
	return 0;
}
	
