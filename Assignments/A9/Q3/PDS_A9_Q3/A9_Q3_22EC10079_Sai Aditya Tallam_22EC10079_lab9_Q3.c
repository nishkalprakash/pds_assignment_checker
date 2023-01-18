#include<stdio.h>

typedef struct rectangle
{
	int x1,y1;
	int x2,y2;
} rectangle;                //new structure is rectangle

int area(struct rectangle s);      //function to calculate area of the given rectangle


int main()
{   
    rectangle s;
	printf("enter the co ordinates of top left corner :");
	scanf("%d%d",&s.x1,&s.y1);                                     //inputting the top left corner co ordinates
	printf("enter the co ordinates of bottom right corners:");
	scanf("%d%d",&s.x2,&s.y2);                                     //inputting the bottom right corners
	int a =area(s);
	printf("%d",a);
	return 0;
}

int area(struct rectangle s)
{
	int length =  s.x2-s.x1;
	int breadth= s.y2-s.y1;
	return length*breadth;              //returning the area value
}




