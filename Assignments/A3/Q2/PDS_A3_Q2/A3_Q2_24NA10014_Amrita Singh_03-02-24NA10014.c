//name -amrita singh
// rollno -24NA10014
#include<stdio.h>
int main()
{
	//to deposit money
	int bal=0,m;
	printf("\nenter the amount of money to be added:");
	scanf("%d",&m);
	bal=bal+m;
	printf("\nthe balance is %d",bal);
	
	// to withdraw money
	int with;
	printf("\nthe amount to be withdrawn:");
	scanf("%d",&with);
	if(bal<with){
		printf("\nbalance insufficient");}
		
	else{
	
		bal=bal-with;
		printf("\nthe balance left is %d",bal);}
	
	// to show balance
	printf("\nthe balance left is %d",bal);
	
	return 0;
	
	}
	
	
	
	
	
