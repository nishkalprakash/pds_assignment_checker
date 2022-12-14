#include<stdio.h>

#include<stdlib.h>

#include<math.h>

int main()

{
int x1, y1, x2, y2,x3, y3;
scanf("%d", &x1);
scanf("%d", &y1);
scanf("%d", &x2);
scanf("%d", &y2);
scanf("%d", &x3);
scanf("%d", &y3);

int l1, l2, l3;
scanf("%d", &l1);
scanf("%d", &l2);
scanf("%d", &l3);
	
	l1 = sqrt((x1-x2)^2 + (y1-y2)^2);
	l2 = sqrt((x1-x3)^2 + (y1-y3)^2);
	l3 = sqrt((x2-x3)^2 + (y2-y3)^2);
return 0;
}
