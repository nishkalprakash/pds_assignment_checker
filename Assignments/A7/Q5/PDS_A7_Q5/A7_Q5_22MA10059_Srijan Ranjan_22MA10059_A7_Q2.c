/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes an array and tells how many terms were out of order
*/
#include<stdio.h>
int main(){
	int n;										//No of terms.
	scanf("%d\n",&n);
	int a[n];                                  //Declaration of variables.
	for(int i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	int count=0;
	for(int i=0;i<n;i++){                  
		for(int k=0;k<i;k++){  				//Loop for checking the first condition in the question.               
			if(a[i]<a[k]){
				count++;
				break;
			}
		}
		for(int j=i;j<n;j++){				//Loop for checking the second condition in the question.				
			if(a[i]>a[j]){
				count++;
				break;
			}
		}
	}
	printf("Out of Order : %d\n",count);
	return 0;
}