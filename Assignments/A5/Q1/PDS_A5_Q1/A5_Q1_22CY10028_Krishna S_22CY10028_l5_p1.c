#include <stdio.h>


int main()
{
int power(int x, int n){
	int res= 1;
	for(int i= 1; i <= n; i++){
		res = x*res;
	} 
	return(res);
}	

int fact(int f){
	int p = 1;
	int i= 1;
	while( i <=f){
	p = p*i;
	i++;
}
	return(p);
}
	int x, n;
	int i=0;
	float res= 1.0,a;

	printf("Enter the numbers:");
	scanf("%d %d", &x, &n);
	while(i<=n){
	//a =(float)((power(x,i))/fact(i));
	//printf("%f\n", a);
	
	res = res +  (float) power(x,i)/fact(i);
	i++;
	printf("%f\n", res);
	
}
	printf("The answer is %f", res);		

	return 0;
}
