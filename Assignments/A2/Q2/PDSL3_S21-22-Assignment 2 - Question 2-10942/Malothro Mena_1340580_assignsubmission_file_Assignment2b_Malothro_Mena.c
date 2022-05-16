#include<stdio.h>

#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
(srand(time(NULL))
{
	int i,x,k,D=0;
	float DE;
	printf("Enter n and k");
	scanf("%d%d",&x,&k)
	p= rand()&1?-1:1;
	for(i=1;i<=x;i++) D+= i*i;
	printf("Result = %d",D);

	DE=sqrt((D/k)*(D/k));
	printf("%f",DE);
	return 0;

}
