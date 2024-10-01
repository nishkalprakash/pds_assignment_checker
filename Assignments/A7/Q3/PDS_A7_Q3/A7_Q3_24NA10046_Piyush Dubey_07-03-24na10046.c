#include<stdio.h>

void read(int n,int a[]){
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}

int min(int a[n]){//to get the max value of array
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min = a[i];
		}
	}
	return min;	
}

int max(int a[n]){//to get the max value of array
	int max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>min){
			max = a[i];
		}
	}
	return max;	
}


int main(){
	int n,bins;
	int a[n];
	printf("N=");
	scanf("%d",&n);
	printf("A[N]=");
	read(n,a);
	printf("Bins=");
	scanf("%d",&bins);
	int c = max(a)-min(a);
	int b=c/bins;
	//Now we can do Min+b , Min+2b .. to get the range for the bins .
	
	
	

	
	
	
	return 0;
}
