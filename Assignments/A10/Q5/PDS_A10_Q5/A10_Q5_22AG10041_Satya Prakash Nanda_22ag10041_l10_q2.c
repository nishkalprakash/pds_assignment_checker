/*
SATYA PRAKASH NANDA
22AG10041
SECTION 14
LAB 10
QUESTION 2
*/
#include<stdio.h>
void ascending(int n, int arr[]);

int main(){
int n1;
printf("enter length of array 1:");
scanf("%d", &n1);
int arr1[n1];
for(int i=0; i<n1; i++){
printf("enter %d element:", i+1);
scanf("%d", &arr1[i]);
}
int n2;
printf("enter length of array 2:");
scanf("%d", &n2);
int arr2[n2];
for(int i=0; i<n2; i++){
printf("enter %d element:", i+1);
scanf("%d", &arr2[i]);
}
int n=n1+n2;
int arr[n];
for(int i=0; i<n1; i++){
arr[i]=arr1[i];
}
for(int i=0; i<n2; i++){
arr[n1+i]=arr2[i];
}
ascending(n, arr);
int j=1;
for(int i=0;i<n-1;i++){
if(arr[i]!=arr[i+1]){
arr[j]=arr[i+1];
j++;
}
}
printf("union:\n");
printf("{");
for(int i=0; i<j; i++){
printf(" %d ",arr[i]);
}
printf("}\n");


int arr3[n];
int k=0;
for(int i=0; i<n1; i++){
	for(int j=0; j<n2; j++){
		if(arr1[i]==arr2[j]){
			arr3[k]=arr1[i];
			k++;
		}
	}
}
printf("intersection:\n");
printf("{");
for(int i=0; i<k; i++){
printf(" %d ",arr3[i]);
}
printf("}\n");


return 0;
}
void ascending(int n, int arr[]){
for(int i=0;i<n; i++){
		for(int j=i+1; j<n; j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

