/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 11
Discription : To find harmonic sum 
*/
#include<stdio.h>
double harmonic(int n){
	double inverse=1.0/n;
	n--;
	if(n!=0)
		inverse=inverse+harmonic(n);
	if(n==0)
		return inverse;
}
int main(){
	int n;
	scanf("%d",&n);
	double sum=harmonic(n);
	printf("%0.3f",sum);
return 0;
}
