/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 8
 Description : print the elements in column major order
 */

#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Number of elements in one row =");
	scanf("%d",&n);
	int a[n*n];
	for(int i=0;i<n*n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=i;j<n*n;j=j+3){
			printf("%d ",a[j]);
		}
	}
}
