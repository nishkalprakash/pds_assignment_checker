/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:11
Discription :

*/
#include<stdio.h>
int flag=0;
int fib(int n)
{
	if(n<2)
		return n;
	else
		return fib(n-1)+fib(n-2);
}
void check(int i,int key)
{
	if(fib(i)==key)
		flag=1;
	else
		if(key<fib(i))
			return;
		else
			check(++i,key);
}
int main()
{
	int key;
	printf("Enter the number");
	scanf("%d",&key);
	check(0,key);
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	
}
