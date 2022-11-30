#include <stdio.h>
int main(){
int rows;		//declaration of variables
printf("Enter the number of rows: ");	//asks user to input no. of rows 
scanf("%d",&rows);			//reads the input

for(int i=1; i<=rows; i++){		//loop for rows
	for(int j=1;j<=i; j++){		//loop for columns
		if (j%2==0){
			printf("0");
		}
		else{
			printf("1");
		}
	}
	printf("\n");		//prints newline after one row
}

return 0;
}
