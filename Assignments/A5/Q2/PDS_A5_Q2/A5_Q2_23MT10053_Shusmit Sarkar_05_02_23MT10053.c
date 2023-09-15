#include<stdio.h>
#include<stdlib.h>
int main(){
int n;
	int a = 0;
	int arr[50];
	int s=60;
	printf("Enter the number of random numbers required : ");
	scanf("%d",&n);

	
	for(int i=0; i<n; i++) {
 		a = 10 + rand() % 91;
 		arr[i] = a;
	}

	
	for(int i=0; i<n; i++) {
 		printf("arr[%d] =  %d \n",i, arr[i]);
	}
        
        for ( int i = 0; i< n; i++){
   	for ( int j = i+1; j< n; j++){
	for ( int k = j+1; k< n; k++){
        if( s == arr[i]+arr[j]+arr[k] ) {
        printf ("The triplets are = arr[%d],arr[%d],arr[%d] = (%d,%d,%d)\n",i , j , k, arr[i], arr[j], arr[k]);
}
 					
}
}
}
return 0;
}
