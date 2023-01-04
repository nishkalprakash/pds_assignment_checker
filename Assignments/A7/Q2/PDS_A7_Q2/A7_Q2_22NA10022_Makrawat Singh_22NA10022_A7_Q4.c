/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 7
 Description : Program to write k(to be taken as input) terms of a series
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void bubblesort( int *a, int n){
	 int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
}
 
int main(){
	
	
	int t;scanf("%d",&t);
	printf("n=");
	int arr[t];
	for(int i=0;i<t;i++){
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,t);
	int a[t];
	for(int i=0;i<t;i++){
		a[i]=0;
	}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(arr[i]==arr[j]){
				a[i]++;
			}
		}
	}
	int m,i=0;printf("m=");scanf("%d",&m);
	int temp;
	while(i<t){
		if(m==a[i]){
			printf("%d ",arr[i]);
			i=i+m;
			temp=1;
		}
		else i++;
	}
	if(temp==0)printf("NO number ");
	printf("appears %d times ",m);
	return 0;
}
	
