/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes an array and tells what max number can be formed using the numbers.
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
	while(count<n){
		for(int i=1;i<n-count;i++){
			if(a[i-1]>a[i]){
				int temp;
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
		count++;
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}