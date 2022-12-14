/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Lab test 1 (Set A), Q1
Discription : To print a pattern based on user input
*/
#include <stdio.h>

int main(){
	int n, i=1, j=1, sum=0;			
	printf("Input the value of n\n");		//prompts user to input the value of n
	scanf("%d", &n);
		if((n<2)||(n>10))
			printf("Input only between [2, 10]\n");		
	while((n<2)||(n>10)){				//a scanf loop which will take only the valid inputs between 2 & 10					
		scanf("%d", &n);}			//for row
	while(i<=n){
		while(j<=i){
			sum=sum+1;			//to calculate the correct values of outputs for each column
			printf("%d ", sum);		//prints out columns
			j++;}
		j=1;
		printf("\n");				//changes the row as per the pattern
		i++;}
	return 0;
}
				
