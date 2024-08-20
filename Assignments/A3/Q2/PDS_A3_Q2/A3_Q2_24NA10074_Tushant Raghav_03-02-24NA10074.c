#include<stdio.h>
int main()
{
int d,w,c,e;
printf("Deposit Money");
scanf("%d",&d);
printf("Withdraw Money");
scanf("%d",&w);
 c=d-w;
if(c>=0){
	printf("Deposited : %d",d);
	printf("\nWithdrew : %d",w); 
	printf("\nBalance : %d",c);
}
else {
printf("Deposited :%d",d);
printf("\nWithdraw failed, Insufficient balance ");
}

return 0;
}
