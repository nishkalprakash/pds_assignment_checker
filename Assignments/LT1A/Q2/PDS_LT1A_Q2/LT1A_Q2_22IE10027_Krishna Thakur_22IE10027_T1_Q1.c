#include<stdio.h>
//program to print a pattern based on the users input
int main(){
	printf("Enter a number between 2 and 10");
	int n;
	//the following loop ensures only valid input is taken
	while(1){
		scanf("%d", &n);
		if(n>1 && n<11){
			break;
		}
		else{
			continue;
		}
	}
	const int rows=n;
	int row, col;
	int a=1;
	//Nested loop is being used to print the pattern

	for(row=1; row<=rows; ++row){
		for(col=1; col<=row; ++col){
			printf("%d ", a);
			a++;
		}
		printf("\n");
	}


	return 0;
}