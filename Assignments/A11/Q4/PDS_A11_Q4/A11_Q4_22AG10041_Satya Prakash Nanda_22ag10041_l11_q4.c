/*
satya prakash nanda
sec 14
22ag10041
lab 11
question 4*/
#include<stdio.h>
void ascending(int arr[], int n);
int main(){
int n;						
printf("enter value of n:");
scanf("%d", &n);
int arr[n];					
for(int i=0; i<n ; i++){
	printf("enter %d element:", i+1);
	scanf("%d", &arr[i]);			
}
int m;
printf("enter the number which you want to delete:");
scanf("%d", &m);				 
int flag=0;
for(int i=0; i<n; i++){
	if(arr[i]==m){
		arr[i]=0;
		flag++;
	}
}
ascending(arr, n);
if(flag!=0){
printf("output after deleting %d:\n", m);
	for(int i=1;i<n; i++){				 
		printf(" %d ", arr[i]);
	}
}
else{
	printf("%d does not exist.",m);
}
			
printf(" \n");
return 0;
}
void ascending(int arr[], int n){	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
