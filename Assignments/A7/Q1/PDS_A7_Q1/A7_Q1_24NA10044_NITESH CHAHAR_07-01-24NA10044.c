//created by : Nitesh Chahar
//roll no. : 24NA10044
#include<stdio.h>
// function of power
int power(int x,int n){
	if(n==0) return 1;
	else{
	for(int i=1; i<=n;i++){
	i=i*x;
	return i;}}
}
//function of factorial
int fact(int n){
	int k=1;
	if(n==0) return 1;
	else{
	for(int i=1;i<=n;i++){
	k=k*i;}
	return k;}
}

int main()
{
	int n,x;
	//taking input n from user
	printf("Enter n : ");
	scanf("%d",&n);
	//taking input x from user
	printf("Enter x : ");
	scanf("%d",&x);
	float sum=0;
	for(int i=0; i<n;i++){
	float p= power(x,n);
	float q= fact(n);
	float div = p/q;
	sum = sum + div;
	}
	printf("%f\n", sum);
}
