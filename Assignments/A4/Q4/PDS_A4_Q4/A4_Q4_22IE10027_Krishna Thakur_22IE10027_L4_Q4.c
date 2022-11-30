#include <stdio.h>

int main(){
	int a;
	int row, col; 
	printf("Enter a number between 2 and 10");
	scanf("%d", &a);
	const int Rows=a;
	for(row=1; row<=Rows; ++row){
		for (col=1; col<=row; ++col){
			if(col%2==0)
				printf("0 ");
			else
				printf("1 ");
		}
		printf("\n");


	}
	return 0;

	
	
}