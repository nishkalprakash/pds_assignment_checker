#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	if(a==b && c!=b && d!=b && c!=d){printf("YES");}
	else if(b==c && a!=d && a!=b && d!=b){printf("YES");}
	else if( c==d && a!=b && b!=c && a!=c){printf("YES");}
	else if(a==d && b!=a && c!=a && c!=b){printf("YES");}
	else if(b==d && a!=b && c!=b && a!=c){printf("YES");}
	else if(a==c && b!=d && b!=c && d!=c){printf("YES");}
	else{printf("NO");}
	return 0;
	}
