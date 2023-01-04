/*SOUVIK SARKAR
ROLL NO> 22ME10083
LAbn NO> 7*/


#include<stdio.h>
void main(){
	int n,a[n],i,f=0,j,k;
	//Taking inputs
	printf("Enter the no. of total elements:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the elements: \n");
		scanf("%d",&a[i]);
	}	
	//i/p array print
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("Enter the new no.\n");
	scanf("%d",&k);
	//logic
	for (i=0;i<n;i++)
	{
		f=0;
		for( j=1;j<n;j++){
			if(a[i]==a[j])
				f++;	
		
		}
		if(f==k)
			printf("%d appears %d times",a[i],f);
	}
	
}