//code creator : tanmay mishra
//roll number : 24na10073
#include<stdio.h>

int main()

{
int a,b,c,d,counter;

	printf("a=");
	scanf("%d" , &a);
	printf("b=");
	scanf("%d" , &b);
	printf("c=");
	scanf("%d" , &c);
	printf("d=");
	scanf("%d" , &d);
	
	
	
	
	
	if (a==b && a==c )
	{
	printf("no");
	}
	
	
	
	else if (a==b && a==d )
	{
	printf("no");
	}
	
	else if (a==c && a==d )
	{
	printf("no");
	}
	
	 else if (a==b && a==c )
	{
	printf("no");
	}
	
	else if (c==b && b==d )
	{
	printf("no");
	}
	
	else if (a==b || a==c || a==d || b==c || d==b || c==d )
	{
	printf("yes");
	}
	
	
	

	
	else 
	{
	printf("no");
	}

	
	
	
	
	


return 0;


}
