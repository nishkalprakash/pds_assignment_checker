#include <stdio.h>
int main()
{
	int a,b,c,d,x1,y1,x2,y2,x,y;
	
	printf("coordinate (a,b) of bottom left corner of rectangle is:\n");
	scanf("%d%d",&a,&b);
	
	printf("coordinate (c,d) of top right corner of rectangle is:\n");
	scanf("%d%d",&c,&d);
	
	x1=a;
	y1=d;
	x2=c;
	y2=b;
	
	printf("all four corners of our rectangle are (%d,%d),(%d,%d),(%d,%d),(%d,%d) \n",a,b,x1,y1,c,d,x2,y2);
	
	printf("the point to be checked is:\n");
	scanf("%d%d",&x,&y);
	
	if (x>a && x<c && y>b && y<d){
		printf("the point (%d,%d) is inside the rectangle\n",x,y);
	}
	else{
		printf("the point (%d,%d) is not inside the rectangle or it is on the rectangle\n",x,y);
	}
	
	return 0;
}
