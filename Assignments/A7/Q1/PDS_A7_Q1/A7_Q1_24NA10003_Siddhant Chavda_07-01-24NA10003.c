#include <stdio.h>
// FACTORIAL FUNCTION
int fact(int n){
	int count,prod;
	prod=1;
	for (count=1;count<=n;){
		prod=prod*count;
		count++;}
	return prod;
	}
// FUNCTION TO FIND THE POWER
int power(int x,int n){
	int m=1,prod;
	prod=1;
	for (m>0;m<=n;m++){
		prod=x*x;
		m++;}
	return prod;
}
// MAIN PROGRAM
int main(){
	int x,n;
	float sum=1;
	int count;
	printf("enter the input:");
	scanf("%d %d",&x,&n);
	if (n>1){
		for (count=1;count<=n;count++){
			sum=sum +(float)power(x,count)/fact(count);
			}
		}
	printf("%f",sum);
	return 0;
	}
	
	
