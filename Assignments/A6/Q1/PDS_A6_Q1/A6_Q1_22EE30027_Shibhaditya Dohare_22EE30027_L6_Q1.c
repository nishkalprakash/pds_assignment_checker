/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 6
Discription : To find nth term of a series
*/
#include<stdio.h>
int print_term(int n){
	int t;
	if (n<=2) return(n);
	else if(n>=3){
		t=3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1;
		return (t);
		} 
}
int main(){
	int k,i;
	scanf("%d",&k);
	if(k<=0) printf("Invalid input");
	for(i=0;i<k;i++){
		printf("%d ",print_term(i));
		}
return 0;
}

