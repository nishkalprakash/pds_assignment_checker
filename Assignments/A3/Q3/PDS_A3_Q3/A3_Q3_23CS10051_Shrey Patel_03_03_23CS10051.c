//Shrey G Patel

//23CS10051


#include <stdio.h>

int main()

{

int x,y;

printf("Enter the coordinates of the point (X,Y) format:");

scanf("%d %d",&x,&y);


if(x==0 && y!=0)

printf("Point lies on Y-axis\n");

else if(y==0 && x!=0)

printf("Point lies on X-axis\n");

else if(y==0 && x==0)

printf("Point is Origin(both on x and y axis)\n");

else if(y>0 && x>0)

printf("Point lies in 1st quadrant\n");

else if(y>0 && x<0)

printf("Point lies in 2st quadrant\n");

else if(y<0 && x<0)

printf("Point lies in 3st quadrant\n");

else if(y<0 && x>0)

printf("Point lies in 4st quadrant\n");


return 0;

}





