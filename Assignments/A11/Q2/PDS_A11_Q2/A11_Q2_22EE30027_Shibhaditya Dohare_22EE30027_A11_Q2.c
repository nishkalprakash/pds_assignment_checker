/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To find a number in fibonacci series 
*/
#include<stdio.h>
int fib(int i){
	int f;
	if(i<2)
		f=i;
	else if(i>=2)
		f=fib(i-1)+fib(i-2);
	return f;
}
int infib(int n){
	int flag,i=0;
	while(1){
	if(fib(i)==n) return 1;
	else if(fib(i)>n) return 0;
	i++;
	}
}
int main(){
	int n,flag;
	scanf("%d",&n);
	flag=infib(n);
	if(flag==1) printf("Yes");
	else if(flag==0) printf("No");
return 0;
}
