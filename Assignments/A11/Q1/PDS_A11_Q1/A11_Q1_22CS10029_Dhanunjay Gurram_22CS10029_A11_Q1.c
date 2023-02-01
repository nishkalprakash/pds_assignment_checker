/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:11*/
#include <stdio.h>
#include <stdlib.h>
float harmonic_sum(int n){
	if (n==1) return 1.0;
	else return (1.0/n)+harmonic_sum(n-1);
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%.3f\n",harmonic_sum(n));
	return 0;
}