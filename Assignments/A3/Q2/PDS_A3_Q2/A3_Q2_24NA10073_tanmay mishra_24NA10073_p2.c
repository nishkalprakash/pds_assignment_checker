#include<stdio.h>
//code creator : tanmay mishra
//roll number : 24na10073

int main()

{
int deposit,withdraw,balance;

//program to show withrawn mount , balance and deposit

printf("deposit :");
scanf(" %d" , &deposit);

printf("\n withdraw : " );
scanf("%d" , &withdraw);

printf("\n deposited=%d" , deposit);

if (withdraw > deposit )

{
printf("withdraw failed : balance is insufficient");
printf("\n balance = %d" , deposit);
} 

else {
	printf("\n withdrew = %d", withdraw);
	printf("\n balance = %d", balance = deposit - withdraw);

}




return 0;


}
