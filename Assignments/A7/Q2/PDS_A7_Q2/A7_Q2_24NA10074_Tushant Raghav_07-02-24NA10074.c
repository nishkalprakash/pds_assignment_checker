#include<stdio.h>
//FUNCTION FOR FINDING GCD
int gcd(int a,int b){
	int min,i;
	if (a>b) min = a;
	else min = b;
	for( i=min;i>=1;i--){
	 if(min%i==0) break;
	}
	int hcf = i;
	return hcf;
}
//FUCNTION FOR COPRIME OF A AND B
int coprime (int a, int b){
	if (gcd(a,b) == 1) return 1;
	else return 0;
}
//FINDING WHICH PAIR ARE COPRIMES 
void pair(int a[]){
	for(int i=1;i<a[4];i++){
		for(int j=i+1;j<a[4];j++){
		int pair = coprime(a[i],a[j]);
		if(pair = 1) printf("%d and %d are coprime \n",a[i],a[j]);
		}
	}
	return ;
}
int main()
{
	int a[5];
	for(int i=0;i<5;i++){
	scanf("%d",&a[i]);
	}
	pair (a);
	return 0;
}
