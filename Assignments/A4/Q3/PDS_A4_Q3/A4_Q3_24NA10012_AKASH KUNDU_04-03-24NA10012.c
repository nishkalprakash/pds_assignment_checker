//program to print numero-pyramid
//Akash Kundu
//24NA10012

#include<stdio.h>
int main()
{	int row, space, countrow, countspace;
	printf("Enter the number of rows : ");
	scanf("%d",row);
	space=row-1;
	
	int num1,num2;
	for (countrow=1; countrow<=row; countrow++)  
	{	for (countspace=1; countspace<=space; countspace++)  
			printf(" ");
		}
	return 0;
}

		
			
		
