/* 	NAME: PRIYAM TARAFDER
	SECTION:14
	QUESTION NO.: 3
	to display a merged sorted array*/
#include <stdio.h>
#include <stdlib.h>
int* Merge(int size1,int size2,int *ptr1,int *ptr2){
	int *ptr3=(int *)malloc((size1+size2)*sizeof(int));
	for(int t=0;t<size1;t++)
		ptr3[t]=ptr1[t];
	for(int t=0;t<size2;t++)
		ptr3[size1+t]=ptr2[t];
	for(int t=0;t<size1+size2;t++){
		for(int i=0;i<size1+size2-t-1;i++){
			if(ptr3[i]>ptr3[i+1]){
				int temp=ptr3[i+1];
				ptr3[i+1]=ptr3[i];
				ptr3[i]=temp;
			}
		}
	}
	return ptr3;
}
int main(){
	int size1,size2;
	int *ptr1,*ptr2;
	printf("Enter size: ");
	scanf("%d",&size1);
	ptr1=(int *)malloc(size1*sizeof(int));
	printf("Enter values: ");
	for(int t=0;t<size1;t++)
		scanf("%d",&ptr1[t]);
	printf("Enter size: ");
	scanf("%d",&size2);
	ptr2=(int *)malloc(size2*sizeof(int));
	printf("Enter values: ");
	for(int t=0;t<size2;t++)
		scanf("%d",&ptr2[t]);
	printf("\nA = ");
	for(int t=0;t<size1;t++)
		printf("%d ",ptr1[t]);
	printf("\nB = ");
	for(int t=0;t<size2;t++)
		printf("%d ",ptr2[t]);
	int *ptr3;
	ptr3=Merge(size1,size2,ptr1,ptr2);
	printf("\nC = ");
	for(int t=0;t<size2+size1;t++)
		printf("%d ",ptr3[t]);
}
	


