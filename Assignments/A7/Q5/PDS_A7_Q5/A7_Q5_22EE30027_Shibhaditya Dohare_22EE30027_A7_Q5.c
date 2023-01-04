/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 7
Discription : To find how many numbers are out of order in an array
*/
#include<stdio.h>
int main(){
	int i=0,j,n,k=0,flag=0;
	printf("Type the size of the array.\n");
	scanf("%d",&n);
	int a[n];
	printf("Type %d integers for the array.\n",n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		int m=0;
		for(j=0;j<n;j++){
			if(j>i){
				if(a[j]<a[i]) 
				m=1;	
			}
			else if(j<i){
				if(a[j]>a[i]) 
				m=1;
			}
			if(m==1){
				k++;
				break;	
			}
		}
	}
	printf("Out of order: %d\n",k);
	return 0;
}
