//creator:md waqib sk
//roll:24NA10039

#include<stdio.h>
int min(int arr[],int n){ //calculates the minimum element of the array
int ans=arr[0];

for(int i=0;i<n;i++){
	if(arr[i]<ans){
	ans=arr[i];
	}
	}
return ans;


}
int max(int arr[],int n){ //calculates the maximum element of the array
int ans=arr[0];

for(int i=0;i<n;i++){
	if(arr[i]>ans){
	ans=arr[i];
	}
	}
return ans;


}




int main(){
int n;
int bins;
printf("N:\n");
scanf("%d",&n);
printf("A[N]:\n");
	int arr[n];
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
printf("Bins:\n");
scanf("%d",&bins);
	int mini=min(arr,n);
	int maxi=max(arr,n);
	int temp=mini;

	int k=(maxi-mini)/bins;
	int j=1;
	int l=bins;
	while(bins--){  
	int temp1;
	if(j==1){
	 temp1=temp;
	}
	
	else{
	temp1=temp+1;
	}
	if(j==l){
	temp=temp1+k;
	}
	else{
	temp=temp1+k-1;
	}int size=0; //keeps track of bin size
	printf("bin%d:",j);
	for(int i=0;i<n;i++){
	if(arr[i]<=temp && arr[i]>=temp1){ //checks condition of range
	printf(" %d  ",arr[i]);
	size++;
	}

	}
	printf(" Elems:"); 
	printf("%d",size);
	printf("\n");
	j++;
}





}
