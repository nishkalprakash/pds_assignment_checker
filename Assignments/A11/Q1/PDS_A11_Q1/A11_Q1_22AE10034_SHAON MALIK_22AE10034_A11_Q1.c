/*Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No : 11
 Question No :1
 Description : To generate sum of Harmonic series
 */
#include <stdio.h>

float sum(int n){
	if(n==1)
		return 1.0;
	else
		return (1.0/n) + sum(n-1); 
}

int main(){
	int n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	float s=sum(n);
	printf("The sum of the Harmonic series until n terms:%.3f",s);
    return 0;
}