//Name: Bhumika Goyal
//Roll no. 23MI10014

#include <stdio.h>
int main()
{
  int a,b,c,d;

  //(a,b) is the bottom left corner of rectangle
  //(c,d) is the top right corner of the rectangle

  printf("Enter a b");
  scanf("%d%d",&a,&b);

  printf("Enter c d");
  scanf("%d%d",&c,&d);

  if(c>a&&d>b){
    printf("Rectangle is formed");
  }
  else {printf("Ill formed rectangle");
      return 0;
  }
  int x,y;
  printf("Enter x and y:\n");
  scanf("%d%d",&x,&y);
  
  if((x>a&&x<c)&&(y>b&&y<d)){
    printf("Point lies inside the rectangle\n");
  }
  else if(!((x>a&&x<c)&&(y>b&&y<d))){
    printf("Point lie outside the rectangle\n");
  }

  if((x==c&&y==d)||(x==a&&y==b)||(x==a&&y==d)||(x==c&&y==b)){
      printf(" Point lies on the corner");
    }
    else if (x==a&&(y>b&&y<d)){
      printf("Point lies on left side of rectangle");
    }
    else if(x==c&&(y>b&&y<d)){
      printf("Point lies on right side of rectangle");
    }
    else if(y==d&&(x>a&&x<c)){
	printf("Point lies on top side of rectangle");
      }
    else if(y==b&&(x>a&&x<c)){
	  printf("Point lies on the bottom side of rectangle");
    }
	return 0;
  }

	  

  
