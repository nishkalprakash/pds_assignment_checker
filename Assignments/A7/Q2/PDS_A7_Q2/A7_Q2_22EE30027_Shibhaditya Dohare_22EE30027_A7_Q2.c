/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 7
Discription : To find repeated numbers in an array
*/
#include<stdio.h>
int main(){
	int i=0,j,n,k,flag=0;
	printf("Type the size of the array.\n");
	scanf("%d",&n);
	int a[n];
	printf("Type %d integers for the array.\n",n);
	for(i=0;i<n;i++) 
		scanf("%d",&a[i]);
	int m;
	printf("Number of repetitions :\n");
	scanf("%d",&m);
	i=0;
	while(i<n){
			int r=0;
			for(j=0;j<n;j++){
					if(a[j]==a[i]) {r++;k=j;}
					}
			if(r==m) {printf("%d ",a[k]);flag=1;}
			if(r==m) i=i+m;
			else i++;
			}
	if(flag==1) printf("appears %d times.\n",m);
	else if(flag==0) printf("No Number appears %d times.\n",m);
	return 0;
}
