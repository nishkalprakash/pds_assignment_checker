#include<stdio.h>
//FUNCTION FOR CALCULATING X^N
int power(int x,int n){
	int ans = 1;
	//LOOP FOR CALCULATING X^N
	for(int i=1;i<=n;i++){
	ans = ans*x;
	}
	return ans;
}
//FUNCTION FOR FACTORIAL
float fact(int n){
	float factorial = 1;
	//LOOP FOR CALCULATING FACTORIAL OF N
	for(int i=1;i<=n;i++){
	factorial = factorial*i;
	}
	return factorial;
}
int main()
{
	int x,n;
	//TAKING VALUES FROM THE USER 
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter n : ");
	scanf("%d",&n);
	//DEFINING THE SUM OF SERIES AS (sos)
	float sos = 1;
	//CALCULATING THE SUM OF SERIES
	for(int i=1;i<n;i++){
	sos = sos + power(x,i)/fact(i);//CALLING FUNCTIONS POWER AND FACT 
	}
	printf("%f",sos);
	return 0;
}
