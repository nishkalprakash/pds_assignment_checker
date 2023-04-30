#include<stdio.h>
#include<math.h>
#define N 100

int main(){
	int n,arr[N],p=0;
	printf("enter the value of n:");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	printf("original array:");
	for(int j=0;j<n;j++){
		printf("%d ",arr[j]);
	}
	for(int j=0;j<n;j++){
		
		if(arr[j]<0){
			int a=arr[j];
			for(int t=0;t<j;t++)
			arr[j-t]=arr[j-t-1];
		
			arr[0+p]=a;
			p++;
		
		}

		}
	
	printf("\nrearranged array:");
	for(int k=0;k<n;k++){
		printf("%d ",arr[k]);
	}
	
return 0;
}