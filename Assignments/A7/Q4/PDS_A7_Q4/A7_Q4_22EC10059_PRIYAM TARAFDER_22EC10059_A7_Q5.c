/* 	NAME: PRIYAM TARAFDER
	ROL NO.: 22EC10059
	ASSIGNMENT NO.: 7
	QUESTION NO.: 5
	insert an element to a sorted array 
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int *a;
	a=(int *)malloc((n+1)*sizeof(int));
	for(int t=0;t<n;t++)
		scanf("%d",&a[t]);	//takes inputs in array
	int m;
	printf("m= ");
	scanf("%d",&m);	//takes m as input
	a[n]=m;
	printf("\nA[n]= ");
	for(int t=0;t<n;t++)
		printf("%d ",a[t]);
	for(int t=n;t>0;t--){
		if(a[t]<a[t-1]){
			int temp=a[t-1];
			a[t-1]=a[t];
			a[t]=temp;
		}
	}//sorts the new array to insert m in appropriate place
	printf("\nOutput array: ");
	for(int t=0;t<n+1;t++)
		printf("%d ",a[t]);	//displays new array
}//end of main method
