#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("enter the bottom left coordinates\n");
scanf("%d%d",&a,&b);
printf("enter top right coordinates\n");
 scanf("%d%d",&c,&d);
 printf("enter any random point\n");
 scanf("%d%d",&x,&y);
 if(a>c||b>d||(a>c&&b>d)){printf("ill formed rectangle");}
 else if(x<c && x>a && y>b && y<d){printf("point lies inside the rectangle");}
 else if(x==a&&(y>b&&y<d)){printf("point lies on left edge of rectangle");}
 else if(x==c&&(y>b&&y<d)){printf("point lies on right edge of rectangle");}
 else if(y==b&&(x>a&&x<c)){printf("point lies on bottom edge of rectangle");}
 else if(y==d&&(x>a&&x<c)){printf("point lies on top edge of rectangle");}
 else if(x==a&&y==b){printf("point lies on bottom left corner");}
 else if(x==a&&y==d){printf("point lies on top left corner");}
 else if(x==c&&y==d){printf("point lies on top right corner");}
 else if(x==c&&y==b){printf("point lies on bottom right corner");}
 else printf("point lies outside of rectangle");
 
 return 0;
}
