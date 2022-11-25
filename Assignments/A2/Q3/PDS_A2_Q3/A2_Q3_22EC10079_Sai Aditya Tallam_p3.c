#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	float x1= -b+sqrt(b*b-4*a*c)/2*a;
	printf("first root is  %f\n",x1);
	float x2=-b-sqrt(b*b-4*a*c)/2*a;
	printf("second root is %f\n",x2);
	return 0;
}

