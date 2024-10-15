#include<stdio.h>
//Function for sorting the array
int sort(int a[],int size){
	int t;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i-1;j++){
			if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			}
		}
	}
}
int main(){
	int n,i,j;
	printf("n = ");
	scanf("%d",&n);
	int arr[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	int m;
	printf("Enter m = ");
	scanf("%d",&m);
	for (i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
		if(m>arr[j+1]){
		int temp=m;
		m=arr[j+1];
		arr[j+1]=temp;
		}
		}
	}
	printf("Output Array:");
	for(int l=0;l<=n;l++){
	printf("%d",arr[l]);
	}
	return 0;
}
