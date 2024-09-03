#include <stdio.h>
int main(){
	//initialising the variables
	int i,j,z,w;
	//taking no of input
	scanf("%d",&i);
	//initialising array
	int array[i];
	
	if (i<101){
		//taking inputs
		for (j=0;j<i;++j){
			scanf("%d",&array[j]);
		}
		printf("\nOriginal array :");
		//printing original array
		for (j=0;j<i;++j){
			printf("%d ",array[j]);}
		//printing rearranged array
		printf("\nRearranged array :");	
		for (z=0;z<i;++z){
			if (array[z]<0){
				printf("%d ",array[z]);
			}
			}
		for (w=0;w<i;++w){
			if (array[w]>0){
				printf("%d ",array[w]);
			}
			}}
	// creating error statement
	else{
		printf("Error n>100");}
	
	return 0;
}
