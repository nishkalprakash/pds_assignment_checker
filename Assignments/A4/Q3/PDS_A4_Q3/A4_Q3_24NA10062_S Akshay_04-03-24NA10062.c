/*
Program to print the given pattern accepting number of rows 
	1
   232
  34543
.....

Name: S.Akshay
Roll No.: 24NA10062
*/


#include <stdio.h>
void main(){
	int n;
	printf("Enter height: ");
	scanf("%d",&n);
	if(n<=0){
		printf("Invalid height\n");
		return;
	}
	
	for(int i=1;i<=n;i++){
		for(int k=0;k<n-i;k++)printf(" ");
		int t=i%10;
		for(int j=1;j<2*i;j++){
			printf("%d",t);
			if(t==0)t=10;
			if(j<i){
				t=(t+1)%10;
			}else{
				t=((t-1)%10);
			}			
		}
		printf("\n");
	}
}
