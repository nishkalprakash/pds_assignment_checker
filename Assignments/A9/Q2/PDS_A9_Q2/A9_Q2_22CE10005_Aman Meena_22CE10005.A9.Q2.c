#include<stdio.h>
typedef struct circle{ 
       int x,y;
}circle;
main()
{
circle p1,p2;
scanf("%d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
printf("%d",abs(p1.x-p2.x)*abs(p1.y-p2.y));
}

