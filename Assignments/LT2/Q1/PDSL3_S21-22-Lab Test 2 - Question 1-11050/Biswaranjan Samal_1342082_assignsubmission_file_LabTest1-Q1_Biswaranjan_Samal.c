/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
LabTest 2,Question:1
*/

#include <stdio.h>

int main(){
	int n,i,j,k;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[10000];
    printf("Enter Elements:");
    for(i=0;i<n;i++)
	    scanf("%d",&arr[i]);

	int imax[n*n],jmax[n*n];
	int last = 0,sum;
	int max = -100000;
	for(i = 0;i < n;i++){
		for(j = i;j < n;j++){
			sum = 0;
			for(k = i;k <= j;k++){
				sum+=arr[k];       // all possible subarray sum is calculated
			}
			if(sum > max){
				max = sum;
				last = 0;         //max value is updated
			}
			if(sum == max){
				imax[last] = i;
				jmax[last++] = j;
			}
		}
	}   //array stores all possible sub array  and we later print it
	printf("Largest Sum:%d\nSub-Array:\n",max);
	for(k = 0;k < last-1;k++){
		for(i = imax[k];i <= jmax[k];i++)
			printf("%d ",arr[i]);
		printf("\nOR\n ");
	}
	for(i = imax[k];i <= jmax[k];i++)  //elements of subarrays being called
		printf("%d ",arr[i]);
}
