#include<stdio.h>
#define N 100
int main()
{
	int n<N,i;
	char haystack[n],r;
	for(i=0;i<n;i++){
	scanf("%d",&r);
	if(r==0||r==1){
	haystack[i]=r;
	}}
	
	printf("Original Array:");
	i=0;
	while(i<n){
	printf("%d",haystack[i]);
	i++;}
	else{printf("Error: Invalid character in the haystack")}
	return 0;}
