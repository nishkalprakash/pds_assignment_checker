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
	int n, s, r;
	s=0;
	scanf("%d", &n);
	if(n>0){
		while(n>=1){
		r=n%10;
		n=n/10;
		s=s+r;
		}
	printf("%d\n", s);
	}
	else{	n=-1*n;
		while(n>=1){
		r=n%10;
		n=n/10;
		s=s+r;
		}
	printf("%d\n", -1*s);
	}
	
return 0;
}
