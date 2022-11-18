// NAME- SATYAJIT BEHERA
//  ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include<stdio.h>
void permutation_of_number(int num,int M,int N){
	if(num > 9999 && num < 100000){ 
      //checks 5 digit number 
		if(num%(M+N) != 0)     
      //checks if number is divisible by M+N or not
			printf("%d ",num);
		return;
	}
permutation_of_number(num*10+M,M,N);    
//recursive calling of the function 
	                             
permutation_of_number(num*10+N,M,N);
}

int main(){
	int M,N;
	printf("Enter two digits:");
	scanf("%d %d",&M,&N);   //enter two numbers
	printf("permutation of number:\n");
   // printing the numbers 
permutation_of_number(0,M,N);  //recursive calling of the function
}
