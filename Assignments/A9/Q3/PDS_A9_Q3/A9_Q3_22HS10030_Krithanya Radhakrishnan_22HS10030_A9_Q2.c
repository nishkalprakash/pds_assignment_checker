#include <stdio.h>
struct rect{
	int x;
	int y;
}tr,bl;
int main()
{
int l,b;
printf("Give x coord of top right coordinate\n");
scanf("%d",&tr.x);
printf("Give y coord of top right coordinate\n");
scanf("%d",&tr.y);
printf("Give x coord of bottom left coordinate\n");
scanf("%d",&bl.x);
printf("Give x coord of bottom left coordinate\n");
scanf("%d",&bl.x);
l=tr.y-bl.y;
b=tr.x-bl.x;
printf("AREA=%d",l*b);
return 0;
}

