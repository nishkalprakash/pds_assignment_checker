#include<stdio.h>
int main()
//program to print yes and no as no. are equal or not
{
	int a,b,c,d;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	printf("d = ");
	scanf("%d",&d);
	if (a==b){
	printf("yes");
	}
	else if (a==c){
	printf("yes\n");
	}
	else if (a==d){
	printf("yes\n");
	}
	else if (b==c){
	printf("yes");
	}
	else if (b==d){
	printf("yes\n");
	}
	else if (c==d){
	printf("yes\n");
	}
	else  printf("no\n");
	return 0;
}
