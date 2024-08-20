#include<stdio.h>
//this is a code to check whether there two numbers equal from the given four inputs .

int main(){
	int a,b,c,d;
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	printf("d = ");
	scanf("%d",&d);
	if (a==b)
	{
	printf("YES\n");
	}
	else if (a==c)
	{
	printf("YES\n");
	}
	else if (a==d)
	{
	printf("YES\n");
	}
	else if (b==c)
	{
	printf("YES\n");
	}
	else if (b==d)
	{
	printf("YES\n");
	}
	else if (c==d)
	{
	printf("YES\n");
	}
	else{ printf("NO\n");}
return 0;
}


