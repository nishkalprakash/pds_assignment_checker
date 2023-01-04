/*SOUVIK SARKAR
ROLL NO> 22ME10083
LAbn NO> 7*/

//Programme to calculate out of order elements
#include<stdio.h>
void main(){
    //varriable decaration
	int n,a[n],i,j;
	//Takin i/p
	printf("Enter the no. of total elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the elements: \n");
		scanf("%d",&a[i]);
	}	
	//i/p array print
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}