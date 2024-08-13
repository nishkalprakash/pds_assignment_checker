#include <stdio.h>
int main()
{
	int n,s1,s2,s3;
	scanf("%d",&n);
	s1= (n*(n+1))/2;
	s2= (n*(n+1)*(2*n+1))/6;
	s3= n/100 + n/10-(10*(n/100)) + n-(n/100)*100-(n/10-(10*(n/100)))*10;
	printf("s1=%d\n",s1);
	printf("s2=%d\n",s2);
	printf("s3=%d\n",s3);
	return 0;
}
