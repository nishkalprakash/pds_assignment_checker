/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 5
Discription : To find the factors of a number 
*/
#include<stdio.h>
int fact (int n){
	int f=1, i;
	for(i=1; i<=(n-1); i++){
				f=f*i;
				}
	
	return (f);
	 	
}
float power(int x, int b){
	int p, a=1;
	for(p=0; p<=b; p++){
				a=a*x;
				}
	return (a);

}
int main()
{
	int x, n, b;
	float a;
	float s=1;
	
	scanf("%d %d", &x, &n);
	if(n==1){ s=1.0; }
	else {
	for(b=0; b<n; b++){
				s=s+power(x, b)/fact(b);
				}	
	}
	printf("%f", s);
return 0;
}	
	
	
	
	
	
		
	

