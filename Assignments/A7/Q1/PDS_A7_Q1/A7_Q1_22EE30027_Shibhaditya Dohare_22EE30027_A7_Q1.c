/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 7
Discription : To insert a new integer in an array 
*/
#include<stdio.h>
int main(){*
	int i=0,j,n;
	printf("Type the size of the array.\n");
	scanf("%d",&n);
	int a[n+1];
	printf("Type %d integers for the array.\n",n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	int x;
	printf("New Integer:\n");
	scanf("%d",&x);
	printf("Input Array\n");
	for(i=0;i<n;i++) 
		printf("%d ",a[i]);
	for(i=0;i<n;i++) 
		if(x<a[i]) break;
	j=i;
	for(i=n;i>=j;i--) 
		a[i]=a[i-1];
	a[j]=x;
	printf("\nOutput Array\n");
	for(i=0;i<n+1;i++) 
		printf("%d ",a[i]);
	return 0;
} 
	
