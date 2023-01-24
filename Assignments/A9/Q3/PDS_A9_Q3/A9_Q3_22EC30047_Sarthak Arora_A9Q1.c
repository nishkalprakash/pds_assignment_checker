/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 9
description: finding the area of rectangle. 
*/ 




# include <stdio.h>
# include <stdlib.h>
// a structure of a position of a point 
typedef struct position {
	int x;
	int y;
} a; 


// a structure that cointains two points which are diagonals of a rectangle 
typedef struct rectangle {
	a r1 ;
	a r2 ;
} rect ;

	


int main()
{
	rect R ;

	printf("enter coordiantes of one corner");
	scanf("%d", & (R.r1.x));
	scanf("%d", & (R.r1.y));

	printf("enter coordiantes of other corner");
	scanf("%d", & (R.r2.x));
	scanf("%d", & (R.r2.y));


	// finding the area of the rectangle 
	int area = (R.r1.x - R.r2.x)*(R.r1.y - R.r2.y) ;
	if (area < 0 ) area*=-1;

	printf("\narea =%d \n",area);



	

	return 0;
}