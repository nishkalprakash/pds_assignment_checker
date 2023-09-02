//Roll no.- 23BT10015
//Name- Ishansh Yadav
#include<stdio.h>

int main()
{
	int x, y;
   printf("Enter the x and y coordinates:");
   scanf("%d %d", &x, &y);
   if(x==0&&y==0)
   		printf("Point lies on origin\n");
   if(x==0&&y!=0) 
   		printf("Point lies on Y-axis\n");
   if(y==0&&x!=0) 
   		printf("Point lies on X-axis\n");
   if(x>0&&y>0) 
   		printf("Point lies in first quadrant\n");
   if(x>0&&y<0) 
   		printf("Point lies in second quadrant\n");
   if(x<0&&y<0) 
   		printf("Point lies in third quadrant\n");
   if(x<0&&y>0) 
   		printf("Point lies in fourth quadrant\n");
   return 0; 
}