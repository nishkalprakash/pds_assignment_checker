/*
 NAME: Priyam Tarafder
 Roll No.: 22EC10059
 Section: 14
 Question no.: 2
 to display the largest and second largest number until program terminates
*/
#include <stdio.h>
int main(){
	int max,max2;
	max=max2=-1;
	printf("Enter numbers: ");
	for(int t=0;;t++){
		int n;
		scanf("%d",&n);
		if(n<0)
			break;
		if(max<n){
			max2=max;
			max=n;
		}else if(max2<n)
			max2=n;
		printf("\n Largest number: %d",max);
		if(t==0)
			printf("\n Second largest number: Value Not yet entered");
		else
			printf("\n Second largest number: %d",max2);
		printf("\n");
	}
}

