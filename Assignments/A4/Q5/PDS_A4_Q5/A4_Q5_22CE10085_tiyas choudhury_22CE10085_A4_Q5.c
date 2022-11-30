#include<stdio.h>
#include<stdlib.h>
int main(){
	int p,q,r,s,pa,pb;double a,b,c;
	printf("Enter coefficient of x^0\n");
	scanf("%d",&s);
	printf("Enter coefficient of x^1\n");
	scanf("%d",&r);
	printf("Enter coefficient of x^2\n");
	scanf("%d",&q);
	printf("Enter non zero  coefficient of x^3\n");
	scanf("%d",&p);
	printf("Enter value of a and b so that b > a ");
	scanf("%lf %lf",&a&b);
	pa=p*a*a*a + q*a*a + r*a +s;
	pb=p*b*b*b + q*b*b + r*b +s;
	if(pa*pb>0){
		printf("Enter the value of a and b again");
		scanf("%lf %lf",&a&b);
	}


c = (((0-pa)*(b-a))/(pb-pa)) + a;
double pc=p*c*c*c + q*c*c + r*c + s;
if(abs(c)<0.001){
	printf("c is the root");
	
}
else{
	if(pa*pc>0){
		a=c;
	}
	else{
		b=c;
	}
	printf("Root is c");
}
return 0;



}
