#include <stdio.h>
int main()
{
	int row,col,n,ROWS;
	printf("ENTER THE NUMBER OF ROWS:");
	scanf("%d",&ROWS);
	n=ROWS;
	for (row=1; row<=ROWS; ++row) {
 		for (col=1; col<=row; ++col) {
 		printf("%d",n);
 			}
 		printf("\n");}
 		
}
