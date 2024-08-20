#include <stdio.h>
int main()
{
	int dep,with,balance;
	balance=0;
	scanf("%d",&dep);
	scanf("%d",&with);
	printf("deposited=%d\n",dep);
	printf("withdrawn=%d\n",with);
	if (with>dep){
		printf("balance= no enough balance\n");
		}
	else {
		balance= dep-with;
		printf("balance=%d\n",balance);
		}
		return 0;
	
}

