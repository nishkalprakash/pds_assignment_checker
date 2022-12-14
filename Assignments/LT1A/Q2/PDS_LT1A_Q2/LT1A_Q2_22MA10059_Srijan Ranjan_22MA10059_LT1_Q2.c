/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Lab Test:1
Description: This program takes a number and prints a pattern corrosponding to that.
*/
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);         //Inputs the number of rows
	for(int i=1;i<=n;i++){
		for(int j=(1+(((i-1)*i)/2));j<=(i+(((i-1)*i)/2));j++){        //Loop for printing the numers in the order.
			printf("%d ",j);
		}
		printf("\n");                                                 //Changes the line.
	}
	return 0;
}