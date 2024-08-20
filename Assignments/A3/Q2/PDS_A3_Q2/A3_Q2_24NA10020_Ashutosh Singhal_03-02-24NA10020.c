// code to check balance amount
//created by Ashutosh Singhal
// roll number - 24NA10020
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter amount to be deposited \n");
	scanf("%d", &a);
	printf("enter amount to be withdrawn \n ");
	scanf("%d",&b);
	c=(b-a);
	if(b>a){
	printf("insufficient balance \n");
	
	}
	else{
	printf("the balance is %d \n",c);
	
	}
	return 0;
}	
