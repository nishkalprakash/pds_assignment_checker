/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes an array and tells which number was present particular number of times.
*/
#include<stdio.h>
int main(){
	int n;														//No of terms.
	scanf("%d",&n);
	int a[n];													//Array declaration.
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	for(int i=0;i<n;i++){
		int count=0;										//Variable to keep the count of the number of times a particular number appears in an array.
		for(int j=i;j<n;j++){
			if(a[i]=a[j]){
				count++;
			}
		}
		if(count==m){											//Condition to check whether the count is equal to m, which is to be checked. 
			printf("%d appears %d times",a[i],m);
		}
	}
	return 0;
}