/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:9*/
#include <stdio.h>
typedef struct{                                              
	int xcoord;
	int ycoord;     
}point;
typedef struct{                                                 //takes the coordinates of the corners of rectangle
	point bottom_left;
	point top_right;
}rectangle;
void area(int ,int ,int ,int); 
void area(int x1,int y1,int x2,int y2){                         //prints area of rectangle
	int ar;
	ar=(x2-x1)*(y2-y1);
	if (ar<0) ar=ar*-1;
	printf("Area: %d\n",ar);
}
int main(){
    rectangle rect;
	printf("Rect:  ");
	scanf("(%d %d) (%d %d)",&rect.bottom_left.xcoord,&rect.bottom_left.ycoord,&rect.top_right.xcoord,&rect.top_right.ycoord);
	area(rect.bottom_left.xcoord,rect.bottom_left.ycoord,rect.top_right.xcoord,rect.top_right.ycoord);
	return 0;
}