#include<stdio.h>
float harmonic(float n); 
int main()
{
float n;
printf("enter a number upto which we want the sum for: ");
scanf("%f",&n);
	if(n<0){
	printf("enter a integer greater than 0");
	}
	else if(n>99999){
	printf("enter a integer less that 99999");
	}
printf("%.3f\n",harmonic(n));
return 0;
}

float harmonic(float n)
{
	if(n==1||n==0){
	return 1;
	}
	else{
	return (1/n + harmonic(n-1));
}
}
