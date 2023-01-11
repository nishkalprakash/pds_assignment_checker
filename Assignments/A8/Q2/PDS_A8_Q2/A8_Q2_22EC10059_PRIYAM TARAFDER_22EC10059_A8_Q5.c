/* NAME: PRIYAM TARAFDER
ROLL NO.: 22EC10059
ASSIGNMENT NO.: 8
QUESTION NO.: 1
DESCRIPTION: finds saddle point of a matrix
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int col,row,saddle=0,r=0;
	printf("Shape of the 2D array: ");
	scanf("%d %d",&col,&row);
	int *matrix; 
	matrix=(int *)malloc(col*row*sizeof(int));
	for(int t=0;t<row;t++)
		for(int i=0;i<col;i++)
			scanf("%d",(matrix+t*row+i));
	for(int t=0;t<row;t++){
		for(int i=0;i<col;i++){
			int max=*(matrix +t*row+i),min=*(matrix+t*row+i);
			for(int j=0;j<col;j++)
				if(*(matrix+t*row+j)<min)
					min=*(matrix+t*row+j);
			for(int j=0;j<row;j++)
				if(*(matrix+j+i*col)>max)
					max=*(matrix+j+i*col);
			if(max==min && max==*(matrix+t*row+i)){
				saddle=*(matrix+t*row+i); 
			}
		}
	}	
	if(r!=0)
		printf("The saddle point is %d",saddle);
	else
		printf("There is no saddle point in this 2D array");
}