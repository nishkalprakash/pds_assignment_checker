#include<stdio.h>

int main()
{
	int i;
	char c;
	double f;
	scanf("%d\n%c\n%lf",&i,&c,&f);
	printf("%d\n",i);
	printf("%c\n",c);
	printf("%.3e\n",f);
	return 0;
}
