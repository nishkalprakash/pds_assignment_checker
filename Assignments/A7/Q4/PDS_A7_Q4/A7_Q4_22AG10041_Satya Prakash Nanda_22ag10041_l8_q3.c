/*
satya prakash nanda
sec 14
22ag10041
lab 8
question 3*/
#include<stdio.h>
void descending(int arr[], int n);
int main(){
int n;
printf("enter the length of the array:");
scanf("%d",&n);
int arr[n];
while(n<2){
	printf("enter the length of the array:");
	scanf("%d",&n);
}

for(int i=0; i<n; i++){
	printf("enter %d element:", i+1);
	scanf("%d",&arr[i]);
}
int arr1[100];
int j=0;
for(int i=0; i<n; i++){
	while(arr[i]>0){
		arr1[j]=arr[i]%10;
		arr[i]=arr[i]/10;
		j++;
	}
}

descending(arr1,j);
for(int i=0;i<j;i++){
	printf("%d",arr1[i]);
}
printf(" \n");

return 0;
}
void descending(int arr[], int n){
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]<arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
