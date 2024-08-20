// prorgram to compare numbers
//created by Ashutosh Singhal
// roll number - 24NA10020
#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 1st number \n");
	scanf("%d",&a);
	printf("enter 2nd number \n");
	scanf("%d", &b);
	printf("enter 3rd number \n");
	scanf("%d", &c);
	printf("enter 4th number \n");
	scanf("%d",&d);
	if (a==b && a!=c && a!=d){
	printf("yes\n");
	}
	else if (a==c && a!=b && a!=d)
	{printf("yes\n");
	}
	else if(a==d && a!=b && c!=a){
	printf("yes\n");
	}
	else if (b==c && b!=a && b!=d){
	printf("yes\n");
	}
	else if (b==d && b!=a && b!=c){
	printf("yes\n");
	}
	else if ( c==d && c!=a && c!=b){
	printf("yes\n");
	}
	else {printf("no\n");
	}
	return 0;
}	
 
	
		
	
	
