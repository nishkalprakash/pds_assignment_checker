#include <stdio.h>
int main()
{
int a ,b ,c , d_ ;

printf("Enter integers = a,b,c,d_ \n");
scanf ("%d %d %d %d", &a , &b, &c, &d_);

if ( a==b && c!=d_) 
{
	printf ("yes");
}

else if ( b==c && a!=d_) 
{
	printf ("yes");
	}


else if ( c==d_ && a!=b) 
{
	printf ("yes");
	}


else if ( a==c && b!=d_) 
{
	printf ("yes");
	}
	
	
	else if ( a==d_ && b!=c) 
{
	printf ("yes");
	}
	
	else if ( b==d_ && a!=c) 
{
	printf ("yes");
	}

	
	
	else 
	{
		printf("No");
	}
	}
	
