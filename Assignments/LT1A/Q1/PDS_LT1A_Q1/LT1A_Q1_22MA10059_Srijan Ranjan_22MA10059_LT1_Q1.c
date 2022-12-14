/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Lab Test:1
Description: This program takes a number and prints all possible perfect number less than that number.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	if(n<=5){
		printf("Invalid Input\n");        //Code for Invalid input.
	}
	else{
		for(int i=6;i<=n;i++){
			int var=0;
			for(int j=1;j<=(i-1);j++){
				if(i%j==0){      //Code to check which all values divide a particular number.
					var=var+j;
				}
				else{
					continue;
				}
			}
			if(var==i){         //Code to check whether the sum of all the divisors are equal to the number.
				printf("%d ",i);
			}
			else{
				continue;
			}
		}
	}
	return 0;
}