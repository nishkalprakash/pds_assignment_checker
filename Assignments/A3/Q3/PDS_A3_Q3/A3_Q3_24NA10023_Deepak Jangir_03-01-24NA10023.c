// LAB3
// Deepak Jangir
// 24NA10023

#include<stdio.h>

int main()
{
	int a, b, c, d;
	printf("enter the values of a, b, c, d :");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	
	
	if(a==b && a!=c && a!=d && b!=c && c!=d && b!=d){
	printf("YES");}
	
	else{if(b==c && a!=c && a!=d && c!=d && b!=d && b!=a){
	printf("YES");}
	
	else{if(c==d && a!=c && a!=d && c!=b && b!=d && b!=a){
	printf("YES");}
	
	else{if(a==c && d!=c && a!=d && c!=b && b!=d && b!=a){
	printf("YES");}
	
	else{if(a==d && a!=c && c!=d && c!=b && b!=d && b!=a){
	printf("YES");}
	
	else{if(b==d && a!=c && a!=d && c!=b && c!=d && b!=a){
	printf("YES");}
	else{ printf("NO");}}}}}}
	return 0;
}
