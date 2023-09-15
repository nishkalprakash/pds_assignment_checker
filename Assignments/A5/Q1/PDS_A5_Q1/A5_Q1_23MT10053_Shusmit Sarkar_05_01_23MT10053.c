#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int a = 0;
	int arr[50];
	int s=0;
	printf("Enter the number of random numbers required : ");
	scanf("%d",&n);

	
	for(int i=0; i<n; i++) {
 		a = 10 + rand() % 91;
 		arr[i] = a;
	}

	
	for(int i=0; i<n; i++) {
 		printf("arr[%d] =  %d \n",i, arr[i]);
	}

	
	for (int i=0; i< n ; i = i+2){
	if( arr[i] > arr [i+2] && i <= n - 2){
	 int temp;
	 temp = arr[i];
	 arr [i] = arr [i+2];
	 arr [i+2] = temp;
	 s++;
	 }
}
	 printf("The final array is \n");
         for(int i=0; i<n; i++) {
 		printf("arr[%d] =  %d \n",i, arr[i]);
	}
	 printf("The number of interchanges is %d",s);
 return 0;
}
