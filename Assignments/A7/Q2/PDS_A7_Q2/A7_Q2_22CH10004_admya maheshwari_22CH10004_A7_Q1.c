/* 	   SECTION        : 14
	   ROLL NO.       : 22CH10004
	   NAME           : ADMYA MAHESHWARI
	   ASSIGNMENT NO. : 7
	   DESCRIPTION    : A C program to find the no. of ellements reapted in an  	array
*/

#include<stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	//take an array as input here
	for(int i=0;i<n;i++){
		printf("enter array element number:%d\n",i+1);
		scanf("%d",&arr[i]);
				     }
	/*take input of the number of the number which tells how many times no.     			is appeared*/
	int m;
	scanf("%d",&m);
	// Cheakng which elements in array are equal
	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

		if(arr[i]==arr[j]){
		
		printf("%d has appears more than once\n",arr[i]);
		       break ;	
                                               }
		
                                           }
                                             }


	return 0;
                 }
