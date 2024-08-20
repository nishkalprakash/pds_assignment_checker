// aashrith vellampalli
// 24NA10007
#include<stdio.h>
int main()
{
	printf("a. deposit money\n");
	printf("b. widthdraw money\n");
	printf("c. check balance\n");
	printf("d. exit\n");
	int deposit,withdraw;
	printf("enter amount to be deposited\n");
	scanf("%d",&deposit);
	printf("enter amount to be withdrawn\n");
	scanf("%d",&withdraw);
	if(withdraw>deposit)
	{
	printf("withdraw failed: insufficient balance\n");
	}
	else
	{
	printf("balance:%d\n",deposit-withdraw);	
	}
 return(0);
}

