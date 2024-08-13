//program to sum of the series 
// code creator :md waqib sk
// roll:24NA10039

#include<stdio.h>
int main(){
	int n;
	int s1;
	int s2;
	int s3;
	scanf("%d",&n);
	s1=n*(n+1)/2;
	s2=n*(n+1)*(2*n+1)/6;
	s3=n/100;
	n=n-s3*100;
	s3+=n/10;
	s3+=n%10;
	printf("s1=%d \n s2=%d \n s3=%d \n",s1,s2,s3);

return 0;
}
