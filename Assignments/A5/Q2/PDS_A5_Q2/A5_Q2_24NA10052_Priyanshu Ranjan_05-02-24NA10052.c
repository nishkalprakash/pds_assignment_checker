#include <stdio.h>
int main(){
	int i,j,k,l=0;
	scanf("%d",&i);
	int array[i];
	for (j=0;j<i;++j){
		scanf("%d",&array[j]);}
	printf("Original array: ");
	for (j=0;j<i;++j){
		printf("%d ",array[j]);}
	for (j=0;j<i;++j){
		for (k=0;k<i;++k){
			if(array[j]==array[k]){
				l++;
				}
			
			}
		
		if (l>1){
			printf("\n %d (%d)",array[j],l);}
		l=0;}
	printf("\nRearranged Array: ");
	for (j=0;j<i;++j){
		for (k=0;k<i;++k){
			if(array[j]==array[k]){
				l++;}
			}
		if(l>1){
			printf(" %d",array[j]);}
		if (l<=1){
			printf(" %d ",array[j]);}
		l=0;}
	return 0;
}
	
