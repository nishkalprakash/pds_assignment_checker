# include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct circle{
	int x; // x is the x co-ordinate of the center
	int y; // y is the y co-ordinat of the center
	float r;// r is the radius of the circle
} Circle;

 Circle Readvalue ()
 {
 	Circle dt;
 	printf("Enter the X Co-ordinate \n");
 	scanf("%d",&dt.x);
 	printf("Enter the Y Co-ordinate \n");
 	scanf("%d",&dt.y);
 	printf("Enter the radius");
 	scanf("%f",&dt.r);
 	return dt;
 }

 int IsIntersectingCircle (Circle A, Circle B)
 {
 	int answer;
      float dbc;
      dbc = sqrt (((A.x)-(B.x))*((A.x)-(B.x)) + ((A.y)-(B.y))*((A.y)-(B.y)));
      	if( dbc< (A.r+ B.r ))
      	{
      		answer=1;
      		printf("The circles intersect");
      		return 1;

      	}
      	else
      	{
      		answer=0;
      	printf("The circles don't intersect");
      	return 0;
      }

  }

  int main()
  {
  	Circle X;
  	Circle Y;
  	X= Readvalue ();
  	Y= Readvalue ();
  	IsIntersectingCircle(X,Y);
  	return 0;
  }
  
      
      
 

