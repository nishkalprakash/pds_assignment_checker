/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:11
Description: This program takes input of a number and tells if its present in the fibonacci series.
*/
#include<stdio.h>
#include<stdlib.h>
int fib(int n){
	if(n==1||n==0) return n;
	else return fib(n-1)+fib(n-2);
}
int main(){
	int n;
	scanf("%d",&n);
	int ans;
	int i=0,flag=0,x=0;
	while(x<=n){
		x=fib(i);
		if(x==n){
			flag=1;
		}
		i++;
	}
	if(flag==0){
		printf("NO");
	}
	if(flag==1){
		printf("YES");
	}
	return 0;
}