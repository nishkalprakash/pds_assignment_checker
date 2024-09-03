#include<stdio.h>
#define N 100
int main()
{
	int n,i,r,j;
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
	printf("\nunique array:");
	for(i=0;i<n;i++){
	for(j=0;j<i;j++){
	data[i]==data[j];
	n--;}printf("%d",data[i]);
	}
	}
	return 0;}
