#include<stdio.h>
#define N 100
int main()
{
	int n,i,r,j,sw;
	int data[n];
	scanf("%d",&n);
	if(n>100){printf("Error: n > 100");}
	else{
	for(i=0;i<n;i++){
	scanf("%d",&r);
	data[i]=r;
	}
	
	printf("Original Array:");
	i=0;
	while(i<n){
	printf("%d",data[i]);
	i++;}
	printf("\nRearranged Array:");
	for(i=0;i<n;i++){
	for(j=0;j<i;j++){
	if(data[i]<0,data[j]>0){
	sw=data[i];
	data[i]=data[j];
	data[j]=sw;}
	printf("%d",r);
	}}
	}
	return 0;
	}

	
