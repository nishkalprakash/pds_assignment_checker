/* 2.	Write a C program to create a menu for a bank management system. 
The menu should include four options as given below.

a.	Deposit money
b.	Withdraw money
c.	Check balance
d.	Exit

The following constraints must be met by the C program:

•	The initial balance is zero.
•	If the user tries to withdraw more money than is available in her account, print an error message “Balance is insufficient”.
•	The program should execute all the options in the following order:
1.	Deposit money
2.	Withdraw money
3.	Check balance

	
Test cases:

#	INPUT	OUTPUT
1	Deposit: 1000 Withdraw: 500	Deposited: 1000
Withdrew: 500
Balance: 500
2	
Deposit:  500
Withdraw: 600
	Deposited: 500
Withdraw Failed: Balance is insufficient
Balance 500
3	Deposit: 500
Withdraw: 500	Deposited: 500
Withdrew: 500
Balance: 0
*/

// Program to create a menu for a bank management system
// Code Creator: Nishkal Prakash
// Roll: 19CS91R05

#include <stdio.h>
int main()
{
    // Using int is also correct
    double balance = 0; // Initial balance is zero
    double deposit, withdraw; // Variables to store deposit and withdraw amount

    // Deposit money
    printf("Enter the amount to deposit: ");
    scanf("%lf", &deposit);
    balance += deposit;
    printf("Deposited: %.2lf\n", deposit);

    // Withdraw money
    printf("Enter the amount to withdraw: ");
    scanf("%lf", &withdraw);
    if (withdraw > balance){
        printf("Withdraw Failed: Balance is insufficient\n");
    }
    else{
        balance -= withdraw;
        printf("Withdrew: %.2lf\n", withdraw);
    }

    // Check balance
    printf("Balance: %.2lf\n", balance);
    return 0;
}