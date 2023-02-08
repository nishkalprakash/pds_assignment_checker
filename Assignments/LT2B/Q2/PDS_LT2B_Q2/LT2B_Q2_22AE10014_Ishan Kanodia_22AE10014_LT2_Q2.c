/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Lab Test : 2
Question No. : 2
Description : Creating a 2D array and use recursive function to print the values in same order
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>												//Here we are defining all the libraries

void print(char s[],int i){										//Writing a function to print basic expressions
	if(s[i]=='\0')return;
	printf("%c",s[i]);
	print(s,i+1);
}
	
int take(){														//Taking input from the user without using scanf in main function
	int d;
	scanf("%d",&d);
	return(d);
}

void print_matrix(int m,int n,int arr[m][n],int x){				//Function to print the integers as entered in matrix form
	if(x==m)return;
	for(int i=0;i<n;i++){
		printf("%d ",arr[x][i]);
	}
	printf("\n");
	print_matrix(m,n,arr,x+1);
}

void print_int(int n){											//Writing a function to print integers
	printf("%d ",n);
}

int main(){
	int m,n;
	char s1[50]="Enter m:";										//We are defining individual strings for the expressions we want to print
	print(s1,0);
	m=take();													//Taking inputs using the function take()
	char s2[50]="Enter n:";
	print(s2,0);
	n=take();
	int arr[m][n];

	char s3[50]="Enter ";
	print(s3,0);
	print_int(m*n);
	char s4[50]="elements: ";
	print(s4,0);
//	printf("Enter %d elements: ",m*n);
	for(int i=0;i<m;i++){
		arr[i][0]=(int *)malloc(n*sizeof(int));					//Dynamically allocating space for array using malloc
	}

	for(int i=0;i<m;i++){										//Input of integers
		for(int j=0;j<n;j++){
		arr[i][j]=take();
		}
	}

	print_matrix(m,n,arr,0);									//Final output
	return 0;
}



















