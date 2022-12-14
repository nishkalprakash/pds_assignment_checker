/*
 NAME: Priyam Tarafder
 Roll No.: 22EC10059
 Section: 14
 Question no.: 3
 to display the armstrong numbers less than user input
*/

#include <stdio.h>

int count(int n){
	int c=0;
	for(int p=n;p>0;p/=10)
		c++;
	return c;
}//finds the number of digits in a number

int power(int a,int b){
	int p=1;
	for(int t=1;t<=b;t++)
		p*=a;
	return p;
}//finds the value of a raised to the power of b

int main(){
	int n;
	scanf("%d",&n);//takes input from user
	if(n<1||n>1000000)
		printf("Invalid input");
	else{
		for(int t=1;t<=n;t++){		
			int c=count(t),s=0;
			for(int p=t;p>0;p/=10)
				s+=power(p%10,c);//end of nested for loop
			if(s==t)
				printf("%d ",t);//end of if block
		}//end of for loop
	}
}//end of main function
