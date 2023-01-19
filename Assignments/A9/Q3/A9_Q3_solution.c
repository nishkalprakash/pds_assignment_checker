// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to store a rectange in a structure and calc its area

#include <stdio.h>
#include <math.h>

typedef struct {
	int x1,y1,x2,y2;        // (x1,y1) Bottom Left , (x2,y2) Top Right 
} RECT;

int rect_area(RECT r)   // A Separate func as required by the question
{
	int ar=abs((r.x1-r.x2)*(r.y1-r.y2));
	return ar;
}
int main ()
{
	RECT R; // R = Rect Structure
	printf ("Enter the coordinates for Bottom Left: ");
	scanf("%d%d",&R.x1,&R.y1);
	printf("Enter the coordinates for Top Right: ");
	scanf("%d%d",&R.x2,&R.y2);
	printf("Area:%d",rect_area(R));
	return 0;
}
