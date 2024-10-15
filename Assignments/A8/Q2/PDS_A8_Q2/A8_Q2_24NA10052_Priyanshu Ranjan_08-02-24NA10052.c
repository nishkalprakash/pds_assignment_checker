#include <stdio.h>


int main(){
	//initialising values
	int n,m;
	//taking n
	printf("n=");
	scanf("%d",&n);
	
	int a[n+1];
	//taking input of array 
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//input of m.
	printf("m=");
	scanf("%d",&m);
	//sorting the array
	for (int i=0;i<n;i++){
	for (int j=0;j<n-i-1;j++){
	int temp =0;
		if(a[j]>a[j+1]){temp =a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
		}
	}}
	//filling garbage value
	a[n+1]=0;
	
	int z=0;
	//finding position
	for (int i=0;i<n;i++){
	
		if (a[i]<m &&a[i+1]>m){
		z=i+1;
		}
	}
	//exchanging postion
	for (int i =n+1;i>=z;i--){
	a[i]=a[i-1];
	}
	//output
	printf("\n");
	a[z]=m;
	printf("Output Array : \n");
	printf("[");
	for (int i=0;i<n+1;i++){
		printf("%d,",a[i]);
	}
	printf("]");
}
