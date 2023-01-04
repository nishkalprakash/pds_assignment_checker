/*
satya prakash nanda
sec 14
22ag10041
lab 8
question 5*/
#include<stdio.h>
void count(int arr[],int n, int m);
int main(){
int n;
printf("enter length of array:");
scanf("%d", &n);
int arr[n];
for(int i=0; i<n; i++){
	printf("enter %d element:", i+1);
	scanf("%d", &arr[i]);
}
int m;
printf("enter m:");
scanf("%d",&m);

count(arr, n, m);
printf(" \n");

return 0;
}


void count(int arr[], int n, int m){

int arr1[n];
for(int i=0; i<n; i++){
	arr1[i]=0;}
int k=0;
int a;
	for(int i=0; i<n-1; i++){
                 a=1;
		for(int j=i+1; j<n; j++){
			if(arr[i]==arr[j]){
				a++;
			}
		}
		if(a==m){
			arr1[k]=arr[i];
			k++;
				}
	}


if(k>0){
	for(int i=0; i<k; i++)
		printf("%d appears %d times",arr1[i],m);
	}
else printf("no number appears %d times is the array", m);
}

