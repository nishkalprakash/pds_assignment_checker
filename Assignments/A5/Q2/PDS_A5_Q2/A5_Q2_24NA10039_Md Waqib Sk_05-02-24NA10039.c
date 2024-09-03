//creator:md waqib sk
//roll:24NA10039
#include<stdio.h>
int main(){

int n;
printf("Enter the size of the array: \n");
scanf("%d",&n);
if(n>100){
printf("Error n>100");
}
else{
int a[100];
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);
}
printf("Original Array: \n");
for(int i=0;i<n;i++){
	printf(" %d ",a[i]);

}
printf("\n");
printf("Duplicates \n");
for(int i=0;i<n;i++){

	int k=0;
	for(int j=i;j<n;j++){

	if(a[i]==a[j]){
	k++;
	
	}
	
	}
	if(k>1){ //check duplicates
	printf("%d (%d) \n",a[i],k);
	}

		}
		
printf("Unique Array: \n");
	for(int i=0;i<n;i++){  //prints unique array

	int k=0;
	for(int j=i;j<n;j++){

	if(a[i]==a[j]){
	k++;
	
	}
	
	}
	if(k==1){
	printf(" %d ",a[i]);
	
	}

		}
		
}


	}





