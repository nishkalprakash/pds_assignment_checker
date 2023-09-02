#include <stdio.h>

int main ()
{
	int a, b,c,d,x,y ;  
	printf("enter the bottom left corner  coordinate   \n");

 	scanf("%d%d", &a, &b );
 	printf("enter the  top right corner coordinate   \n");
 	scanf("%d%d", &c, &d );
  	if(a<c && b<d)
	{
		printf("enter the  point p coordinate x and y  \n");
  		scanf("%d%d", &x, &y);
  		if(a==x && b==y)
		{
			printf("enter the  point p coordinate lies on left   bottom corner  \n");
		}
  		else if(c==x && d==y)
		{
			printf("enter the  point p coordinate lies on top right corner  \n");
		}
  		else if(c==x && d>y && b<y){printf(" the  point p  lies on right side line\n");}
  		else if(a==x && d>y && b<y){printf(" the  point p lies on left side line\n");}
  		else if(d==y && c>x && a<x){printf(" the  point p lies on top side line\n");}
  		else if(b==y && c>x && a<x){printf(" the  point p  lies on bottom side line\n");}
		else if(d>y && b<y && c>x && a<x){printf(" the  point p  lies inside the rectangle\n");}
		else if(d<y || b>y || c<x || a>x){printf(" the  point p  lies outside  the rectangle\n"); }
	}
	else {printf("ill formed rectangle");}
  	return 0;
}
