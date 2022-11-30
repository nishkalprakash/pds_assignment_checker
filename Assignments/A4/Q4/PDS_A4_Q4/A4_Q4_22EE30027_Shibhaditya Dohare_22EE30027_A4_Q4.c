/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 4
Discription : To find sum of the digits 
*/
#include<stdio.h>
int main()
{
	int x, y, n;
	scanf("%d", &n);
	for(x=1; x<=n; x++){
		for(y=1; y<=x; y++){
			if(y%2==0){
				printf("0");
				}
			else{
				printf("1");
				}
			}
		printf("\n");
	}
	return 0;
}
				
			
	
