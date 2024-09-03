#include <stdio.h>
#define N 100

void main(){
	int arr[N];
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	if(n>N){
		printf("Error: n > 100\n");
		return;
	}else if(n<1){
		printf("Error: n <= 0\n");
		return;
	}
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	
	int ele_cnt, dup_cnt;
	printf("Duplicates:\n");
	
	//Removing duplicates
	for(int i=0;i<n;i++){
		dup_cnt=1;
		for(int j=i+1;j<n;j++){//check all elements after arr[i] for duplicates 
			while(arr[j]==arr[i]){
			//if duplicate is found left shift the array from that index(j) and reduce n by 1
				dup_cnt++;
				for(int k=j;k<n-1;k++)arr[k]=arr[k+1];
				n--;
				if(j>=n)break;
			}
		}
		if(dup_cnt>1){
			printf("\t %d (%d) \n",arr[i],dup_cnt);
			ele_cnt++;
		}
	}
	
	
	if(ele_cnt==0)printf("\t No Duplicates Found\n");
	
	printf("Unique Array: ");
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
}
