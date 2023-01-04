/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 7
Discription : To find repeated numbers in an array
*/
#include<stdio.h>
int main(){
	int i=0,j,n,k,p;
	printf("Type the size of the array.\n");
	scanf("%d",&n);
	int a[n];
	printf("Type %d integers for the array.\n",n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[min]) min=j;
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;		
	}
	for(i=n-1;i>=0;i--) 
	if(a[i]<10)
		printf("%d",a[i]);
	for(i=n-1;i>=0;i--) 
	if(a[i]>=10)
		printf("%d",a[i]);
	return 0;
}
	
	
