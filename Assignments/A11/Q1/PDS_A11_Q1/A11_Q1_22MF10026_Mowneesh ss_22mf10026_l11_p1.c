#include<stdio.h>
#include<math.h>

float function(int a)
{
	float i=1;
	if(a==1)return a;
	else return function(a-1)+(i/a); 
}
int main ()
{
	int a, p, q;
	float ans;
	printf("enter a :");
	scanf("%d", &a);
	if(a==1){
		printf("1.000\n");
		return 0;
	}
	ans = function(a);
	p = (int)(ans*1000);
	q = (int)(ans*10000);
	if(q - 10*p>5)
		printf("%d.%d\n", p/1000, p%1000 +1);

	if(q - 10*p<=5)
		printf("%d.%d\n", p/1000, p%1000);

	return 0;
}