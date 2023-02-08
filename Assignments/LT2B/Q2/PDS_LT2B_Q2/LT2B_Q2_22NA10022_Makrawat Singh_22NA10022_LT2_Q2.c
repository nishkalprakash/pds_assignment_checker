/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : Test 2
 Description : Program to make a recursive function to print elements in same order as entered.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int m;int n;
int set(){                //making a function to take m and n from user and make a dynamic 2d Array
	
	printf("Enter M:");
	scanf("%d",&m);
	printf("Enter N:");
	scanf("%d",&n);
	int ** b = (int**)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++){
		b[i]=(int*)malloc(n*sizeof(int*));
	}

	printf("Enter %d elements :",m*n);
	return m*n;
}
int l=0;
int func(n,k){                      // making a function to scan and print simultaniously
	
	if(l%n==0&&l!=0){
		printf("\n");
	} 
	l++;
	if(k==0){
		return 0;
	}
	else{
		int j;
		scanf("%d",&j);
		printf(" %d",j);
		func(n,k-1);
	}

}
int main()
{	                                    //calling the predefined functions
	int k;
	
	k=set();
	func(n,k);

}