/* Name- Rishi Dhoble
Roll no- 21ME30053
Sec-3
Package- Code Blocks
Q5b
*/

#include <stdio.h>
#include <stdlib.h>

int numberEle(int start,int end,int* a,int n){
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]<=end && a[i]>=start)
			count++;
	}
	return count;
}

int main(){
	int n,nb,maxn=1,i;
	int *a;

	printf("\nEnter number of elements: ");
	scanf("%d",&n);

	printf("\nEnter the array elements: ");
	a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>maxn)
			maxn=a[i];

	}

	printf("Enter the number of bins: ");
	scanf("%d",&nb);

	int **bin;//For the bins
	int *nEle;//For the number of elements
	nEle=(int*)malloc(sizeof(int)*nb);
	bin=(int*)malloc(sizeof(int)*nb);

	int start=1,end=maxn;
	for(i=0;i<nb;i++){
		end = (maxn/nb)+start -1;
		if(i==nb-1)end=maxn;
		nEle[i]=numberEle(start,end,a,n);
		bin[i] = (int*)malloc(sizeof(int)*nEle[i]);

		int *p;
		p=bin[i];
		for(int j=0;j<n;j++){
			if(a[j]>=start && a[j]<=end)
			    *p++=a[j];
		}

		printf("\nbin%d-> ",i+1);
		for(int j=0;j<nEle[i];j++)
			printf("%d, ",bin[i][j]);
		printf(" Number of elements in bin%d: %d",i+1,nEle[i]);
		start=end+1;
	}
	return 0;
}
