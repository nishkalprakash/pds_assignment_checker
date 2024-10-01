/*
Program to split integer array into bins and print them

Name:S.Akshay
Roll No.:24NA10062
*/

#define N 100
#include <stdio.h>
int findMin(int arr[],int n){
	int m=arr[0];
	for(int i=0;i<n;i++)if(arr[i]<m)m=arr[i];
	return m;
}

int findMax(int arr[],int n){
	int m=arr[0];
	for(int i=0;i<n;i++)if(arr[i]>m)m=arr[i];
	return m;
}

void bin(int arr[], int n,int nbins, int size, int min){
	//n->size of array
	for(int i=1;i<=nbins;i++){
		int cnt=0;
		printf("bin%d->",i);
		//the subranges are [min + (i-1)*size , min + i*size -1]
		for(int j=0;j<n;j++){
			if(arr[j]>=min+(i-1)*size && arr[j]<min+i*size){
				printf(" %d,",arr[j]);
				cnt++;
			}
			//to print the remaining elements in the last bin 
			if(i == nbins && arr[j]>=min+i*size){
				printf(" %d,",arr[j]);
				cnt++;
			}
		}
		printf("\tElems = %d\n",cnt);
	}
}
		

void main(){
	int arr[N];
	int bins,n;
	int min,max;//for determining range
	int cnt;//size of bin
	printf("Enter the numebr of elements: ");
	scanf("%d",&n);
	printf("Enter the elements: ");
	for(int i=0;i<n;i++)scanf("%d,",&arr[i]);
	printf("Enter the number of bins: ");
	scanf("%d",&bins);
	min = findMin(arr,n);
	max = findMax(arr,n);
	//range is [min,max]
	//size of each bin = (max-min+1)/(number of bins)
	cnt = (max-min+1)/bins;
	bin(arr,n,bins,cnt,min);
}
	
	
