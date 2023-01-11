/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:8*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int col;
	int matrix[100][100];
	int colm=0,row=0;
	char d='1';
	printf("Number of elements in one row=");
	scanf("%d",&col);
	while (d!='\n'){          //taking the elmts in a matrix manner
		scanf("%d",&matrix[row][colm]);
		colm++;
		if (colm==col) {colm=0; row++;}
		d=getchar();
	}
	printf("Column Major Order: ");    //loops to print elements in a colm wise order
	for (int i=0;i<col;i++){
		for (int j=0;j<row;j++){
			printf("%d ",matrix[j][i]);
		}
	}printf(" \n");
	return 0;
}