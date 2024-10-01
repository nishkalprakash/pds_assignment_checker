//calculates sum
//creator:md waqib sk
//roll:24NA10039




	#include<stdio.h>

	int fact(int n){   // calculates factorial of a given number
	if(n==0){
	return 1;

	}
	int ans=1;
	for(int i=n;i>=1;i--){

	ans*=i;
	}

	return ans;
	}

	int power(int n,int x) {  //calculates power of given number

	int i=1;
	int res=x;
	while(i<n){
	res*=x;
	i++;
	}
	return res;
	}

int main(){

	int x,n; // takes the inputs
	printf("Enter the value of x \n");
	scanf("%d",&x);
	printf("Enter the value of n \n");
	scanf("%d",&n);

	float sum=1;
	int i=1;
	int k=1; 
	//calculates the sum
	while(i<=n && k<n){
	float base=fact(i);
	float pow=power(i,x);
	sum+=(float)pow/base;

	k++;
	i++;
	}
 printf(" The required sum is : %f",sum);




}

