#include<stdio.h>
int main () {
	int a,b,c,d;
	
	printf("a=");
	scanf("%d",&a);
	
	printf("b=");
	scanf("%d",&b);
	
	printf("c=");
	scanf("%d",&c);
	
	printf("d=");
	scanf("%d",&d);
	
	if ((a==b)) {
	printf("yes");
	}
	
	else if ((b==c)) {
	printf("yes");
	}
	
	else if ((c==d)) {
	printf("yes");
	}
	
	else if ((d==a)) {
	printf("yes");
	}
	
	else if ((a==c)) {
	printf("yes");
	}
	
	else if ((b==d)) {
	printf("yes");
	}
	
	else {
	printf("NO");
	}
	
	return 0;
}
