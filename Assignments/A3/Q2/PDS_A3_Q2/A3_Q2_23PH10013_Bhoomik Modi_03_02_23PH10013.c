// Name: Bhoomik Modi
// Roll_No.: 23PH10013
#include<stdio.h>
int main(){// Begining of main function
	int tot_mark;// For taking input of total marks
	printf("Enter total marks: ");
	scanf("%d",&tot_mark);
	if (tot_mark>100){
	    printf("Wrongly entered total marks \n");
	}
	
	else if (tot_mark>=90){
	    printf("Your grade is : EX\n");
	}
	else if (tot_mark>=80){
	    printf("Your grade is : A\n");
	}
	else if (tot_mark>=70){
	    printf("Your grade is : B\n");
	}
	else if (tot_mark>=60){
	    printf("Your grade is : C\n");
	}
	else if (tot_mark>=50){
	    printf("Your grade is : D\n");
	}
	else if (tot_mark>=35){
	    printf("Your grade is : P,\n");
	}
	else{ 
	    printf("Your grade is : F\n");
	}
	return 0;
	}
