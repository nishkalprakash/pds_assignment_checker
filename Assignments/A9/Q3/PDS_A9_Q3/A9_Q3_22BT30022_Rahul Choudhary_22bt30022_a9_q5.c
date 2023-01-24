/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:9
description:find area of rectangle
*/
#include<stdio.h>

struct rectangle    //struct a rectangle
{
	int bottomleftx;
	int bottomlefty;
	int toprightx;
	int toprighty;
};
	int area(struct rectangle s1)
{
	int area=(s1.toprightx-s1.bottomleftx)*(s1.toprighty-s1.bottomlefty);//area of rectangle
	printf("area=%d\n",area);
}
	int main()
{
	struct rectangle r;
	printf("rectangle   ");
	scanf("%d %d %d 		%d",&r.bottomleftx,&r.bottomlefty,&r.toprightx,&r.toprighty);
	area(r);
	return 0;
}
