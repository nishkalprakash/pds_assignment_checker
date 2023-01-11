/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 8
description: to  print the elements in column-major order.
*/ 




# include <stdio.h>



int main()
{

	int r;
	printf("enter the number of rows");
	scanf("%d",&r);
	int c=r;                                      // because a square matrix is given 
	int arr[r][c]; 
	int i,j;
	for(j = 0 ; j<r ;j++){
		for(i = 0; i<c ; i++) scanf("%d", &arr[i][j]) ;         //taking input of the matrix                  
		}
	
	

	for(int k = 0 ; k<c ;k++){
		for(int i = 0; i<r ; i++) printf("%d ", arr[k][i]);        // printing in columnn majour order  
	}
	

	printf("\n");
	
	

	return 0;
}
