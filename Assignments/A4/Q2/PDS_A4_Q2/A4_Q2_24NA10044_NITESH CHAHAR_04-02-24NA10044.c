#include<stdio.h>
//program to enter a sequence of positive integer values
//Created by Nitesh Chahar
//Roll no. : 24NA10044

int main(){
	int max = 0, next;
	printf("Enter Numbers :");
	scanf("%d",&next);
	
	while (next > 0) {
		if (next>max) max = next;
		printf("Largest number: %d\n",next);
		printf("Second largest number : Value not yet entered\n");break;
	}
	printf("Enter Numbers :");
	scanf("%d",&next);
	
	return 0;	
}
