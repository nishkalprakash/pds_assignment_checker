#include<stdio.h>
int main()
{
	int n,flag=0;
	scanf("%d",&n);
	int a[n];
	if(n<=100){
		for (int i=0;i<n;i++){
			scanf("%d",&a[i]);}
			
			for(int i=0;i<n;i++){
			flag=0;
			for (int j=0;j<n;j++){
			if (a[i]==a[j])
			flag=flag+1;}
			printf("\nthe duplicates of %d are %d",a[i],flag);}}
			
			for(int i=0;i<n;i++){
			for (int j=i;j<n;j++){
			if(a[i]==a[j])
			{
			for ( int k=j;k<n;k++){
			a[k]=a[k+1];}}}
			n--;
			printf(a[i]);}
			
			
			
return 0;}
			
			
