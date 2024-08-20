//amrita singh
//24NA10014
#include<stdio.h>
int main()
{	
	int a,b,c,d;
	printf("enter four numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a==b || a==c || a==d || b==c ||b==d || c==d){
		if ((a==b && b==c) || (b==c && c==d) || (a==c && c==d )|| (d==a && a==b))
		printf("no");
		else
		printf("yes");}
		
	else
	printf("no");
	
	
	return 0;
	}
