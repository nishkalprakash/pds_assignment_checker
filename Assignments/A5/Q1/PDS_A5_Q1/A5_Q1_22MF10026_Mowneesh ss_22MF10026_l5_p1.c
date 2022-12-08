#include<stdio.h>


int main()

{
int power(int x, int n){
	int result=1;
	for(int i=1; i <= n; i++){
	result=x*result;
	}
	return (result);
}
int fact( int f){
	int h=1;
	int i=1;
	while (i<=f){
	h=h*i;
	i++;
}
	return(h);
}
	
	int x, n;
	int i=0;
	float result=1.0,m;
	
	printf("enter the values:");
	scanf("%d %d", &x, &n);
	while(i<=n){

result= result+ (float) power(x,i)/fact(i);
i++;
	printf("%f", result);
}
	printf(" the ans is %f", result);
	return 0;
}
