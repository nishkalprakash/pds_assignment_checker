/*name-gaurav meena
roll no -22CE10025
lab-11*/

#include<stdio.h>

float harmonicsum(int n){
	if(n==1)
		return 1.0;
	return 1.0/n + harmonicsum(n-1);
}

int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);

	printf("sum of harmonic series is %f",harmonicsum(n));
	return 0;
}
