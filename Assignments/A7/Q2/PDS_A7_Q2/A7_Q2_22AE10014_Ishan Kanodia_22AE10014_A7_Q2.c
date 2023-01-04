/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 7
Question No. : 2
Description : Output of all the numbers that appear for n number of times
*/

#include<stdio.h>

int main(){
	int m,size=10,num_count=0;		//Declaring the variables
	printf("Enter size : ");
	scanf("%d",&size);
	int arr[size];				//Declaring an array
	printf("n=");
	for(int i=0;i<size;i++){		//Taking input in the array
		scanf("%d",&arr[i]);
	}
	printf("m=");
	scanf("%d",&m);
	for(int j=1;j<=9;j++){			//Running a loop for checking the digits from 1 to 9
		int count=0;
		for(int k=0;k<size;k++){	//Running a loop for checking each element in the array
			if(arr[k]==j){
				count++;
			}
		}
	if(count==m){
		printf("%d ",j);		//Printing the output
		num_count++;
	}
	}
	if(num_count==0)
	printf("NO ");				//Case for 0 matches
	printf("appears %d times ",m);
return 0;
}
