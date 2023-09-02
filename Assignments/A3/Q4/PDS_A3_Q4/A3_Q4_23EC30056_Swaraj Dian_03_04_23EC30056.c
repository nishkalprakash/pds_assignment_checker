//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;   //Integer variables for co-ordinates
  printf("Enter the coordinates of bottom-left corner of rectangle: ");
  scanf("%d%d",&a,&b);
  printf("\nEnter the coordinates of top-right corner of rectangle: ");
  scanf("%d%d",&c,&d);
  if ((c<=a)||(d<=b)) //Checking if rectangle is formed
    {
      printf("Ill formed rectangle");
      return 0;      //Exiting program
    }
  else               //Proceeding if rectangle is formed
    {
      printf("Enter co-ordinates of a point p(x,y): ");
      scanf("%d%d",&x,&y);
      if(((x<c)&&(x>a))&&((y<d)&&(y>b)))                //Checking for point inside rectangle
	printf("p=(%d,%d) lies inside the rectangle",x,y);
      else if(((x>c)||(x<a))&&((y>d)||(y<b)))          //Checking for point outside rectangle
	printf("p=(%d,%d) lies outside the rectangle",x,y);
      else if((x==a)&&(y==b))                         //Checking for point on the corners of rectangle
        printf("p=(%d,%d) lies bottom left corner of the rectangle",x,y);
      else if((x==a)&&(y==d))
        printf("p=(%d,%d) lies top left corner of the rectangle",x,y);
      else if((x==c)&&(y==d))
        printf("p=(%d,%d) lies top right corner of the rectangle",x,y);
      else if((x==c)&&(y==b))
        printf("p=(%d,%d) lies bottom right corner of the rectangle",x,y);
      else if(x==a)                                   //Checking for point on the sides of rectangle
	printf("p=(%d,%d) lies on the left side of the rectangle",x,y);
      else if(y==d)
	printf("p=(%d,%d) lies on the top side of the rectangle",x,y);
      else if(x==c)
	printf("p=(%d,%d) lies on the right side of the rectangle",x,y);
      else if(y==b)
	printf("p=(%d,%d) lies on the bottom side of the rectangle",x,y);
      return 0;
    }
}
