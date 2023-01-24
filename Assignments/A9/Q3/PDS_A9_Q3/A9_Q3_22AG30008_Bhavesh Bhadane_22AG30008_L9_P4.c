#include<stdio.h>

typedef struct rect{
	int x1;
	int x2;
	int y1;
	int y2;
} rect;

int main(){

  rect r;
  int area ;
	printf("Enter coordinates of reactangle\n ");
	printf("Enter coordinates of bottom left corner:");
	scanf("%d %d",&r.x1,&r.y1);
   printf("Enter coordinates of top right corner :");
   scanf("%d %d",&r.x2,&r.y2);

   area = (r.x2-r.x1)*(r.y2-r.y1);
   printf("Area is %d\n",area);

   return 0;
}
