/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:7
Description: This program takes a sorted array and inserts an element at an appropriate place so that the array remains sorted.
*/
#include<stdio.h>
int main(){
	int n;										//No of terms.
	scanf("%d",&n);
	int a[n];
	int b[n+1];                                 //Declaration of variables.
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int m;
	scanf("%d",&m);
	if(m<a[n-1]){									//Condition to check if the number to be inserted is the last one.
		for(int i=0;i<n;i++){										//Condition to check till where the number to be inserted is greater than the array number.
			if(a[i]<m){
				b[i]=a[i];
			}
			else{
				b[i]=m;
				for(int j=i;j<n;j++){
					b[j+1]=a[j];
				}
				break;
			}
		}
	}
	else{
		for(int i=0;i<n;i++){
			b[i]=a[i];
		}
		b[n]=m;
	}
	for(int i=0;i<n+1;i++){                          //Printing the answer.
		printf("%d ",b[i]);
	}
	return 0;
}