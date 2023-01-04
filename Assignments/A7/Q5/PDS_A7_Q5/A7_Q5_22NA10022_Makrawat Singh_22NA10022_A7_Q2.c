/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 7
 Description : 
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void bubblesort(int *a,int n){
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
void printarray(int *b,int n){
	for(int i=0;i<n;i++){
		printf("%d ",b[i]);
	}
}
int main(){
	int a[10];int n;scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		
		scanf("%d",&a[i]);
		
	}
	
	//number of elements are n
	int count=0;int c[n];
	for(int j=0;j<n;j++){
		c[j]=a[j];
	}
	
	
	
	for(int k=0;k<n-1;k++){
		if(c[k]>c[k+1]){
			count=n-k;
			break;
		}
	}
	
	printf("Out of order: %d \n",count);
}
