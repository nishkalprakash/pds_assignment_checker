//Name: Shreya Bharti
//Roll No.: 22CH10064
//Section: 14
//LAB TEST 1 (Set B)
//Ques: Program that prints out a pattern based on user input.






#include <stdio.h>
int main(){

int row;							//declaration of variable row

printf("Enter the number of rows in the range[2,10]: ");	//Asking for user input
scanf("%d",&row);						//Reading the input by user

if(row>=2 && row<11){						//Defining range
	for(int i=1; i<=row; i++){				//Outer loop for rows
		for(int j=1; j<=i; j++){			//inner loop for columns
			printf("%d",i);				//prints i
		}
		printf("\n");					//cursor moves to newline for the next row
	}
}
else{
	printf("Invalid input.");				//message displayed if user inputs any number beyond the given range[2,10]
}

return 0;
}
